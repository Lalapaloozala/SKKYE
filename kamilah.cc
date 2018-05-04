//simple server
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>
#include <boost/asio.hpp>

using namespace std;
using namespace boost;
using boost::asio::ip::tcp;

int main() {
    cout << "Please enter a socket (> 1024) to bind to:\n";
    int socket = 0;
    cin >> socket;
    if (!cin) return 1;
    if (socket < 1024) {
        cout << "The socket must be greater than 1024.\n";
        return 1;
    }
    string s;
    cout << "Please enter a message to send to clients that connect:\n";
    getline(cin,s); //Discards the newline after first cin
    getline(cin,s);
    s = s + '\n'; //Append newline to end of s

    if (!cin) return 1;

    try {
        asio::io_service io_service;

        tcp::acceptor acceptor(io_service, tcp::endpoint(tcp::v4(), socket));

        while (true) {
            tcp::socket socket(io_service);
            acceptor.accept(socket);

            system::error_code ignored_error;
            asio::write(socket, boost::asio::buffer(s),
                    asio::transfer_all(), ignored_error);
        }
    } catch (std::exception& e) {
        cerr << e.what() << endl;
    }

    return 0;
}

//simple client
#include <iostream>
#include <boost/array.hpp>
#include <boost/asio.hpp>

using namespace std;
using namespace boost;
using boost::asio::ip::tcp;

asio::io_service io_service;
tcp::resolver resolver(io_service);

int main(int argc, char* argv[]) {
    try {
        if (argc != 3) {
            cerr << "Usage: " << argv[0] << " <host> <port>" << endl;
            return 1;
        }

        tcp::resolver::query query(argv[1], argv[2]);
        tcp::resolver::iterator endpoint_iterator = resolver.resolve(query);
        tcp::resolver::iterator end;

        tcp::socket socket(io_service);
        system::error_code error = asio::error::host_not_found;
        while (error && endpoint_iterator != end) {
            socket.close();
            socket.connect(*endpoint_iterator++, error);
        }
        if (error)
            throw system::system_error(error);

        while (true) {
            boost::array<char, 128> buf;
            system::error_code error;

            size_t len = socket.read_some(asio::buffer(buf), error);

            if (error == asio::error::eof)
                break; // Connection closed cleanly by peer.
            else if (error)
                throw system::system_error(error); // Some other error.

            cout.write(buf.data(), len);
        }
    } catch (std::exception& e) {
        cerr << e.what() << endl;
    }

    return 0;
}
