#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>
#include <boost/asio.hpp>
#include "internet_server.h"

int main() {
    Internet_Server(7299,"Hi Kamilah");
    Internet_Server(7299,"Hi Garrett");
    return 0;
}
