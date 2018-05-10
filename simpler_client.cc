#include "internet_client.h"
#include <sstream>
using namespace std;

void usage(char *argv0) {
    cerr << "Usage: " << argv0 << " <host> <port>" << endl;
    exit(1);
}

int main(int argc, char* argv[]) {
    Internet_Client client("localhost","7299");
    cout << client.read() << endl;
    Internet_Client client2("localhost","7299");
    cout << client2.read() << endl;
}
