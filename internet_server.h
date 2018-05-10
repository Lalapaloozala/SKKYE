#pragma once
// Copyright William Kerney
// based on:
// Copyright (c) 2003-2008 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>
#include <boost/asio.hpp>

using namespace std;
using namespace boost;
using boost::asio::ip::tcp;

//A simple server that just sends a string and closes shop
//Use it like this: Internet_Server(2020,"Hello World!\n");
class Internet_Server {
    public:
    Internet_Server(int port, string s) {
        try {
            asio::io_service io_service;
            tcp::acceptor acceptor(io_service, tcp::endpoint(tcp::v4(), port));
            tcp::socket socket(io_service);
            acceptor.accept(socket);
            system::error_code ignored_error;
            asio::write(socket, boost::asio::buffer(s), asio::transfer_all(), ignored_error);
        } catch (std::exception& e) {
            cerr << e.what() << endl;
        }
    }
};
