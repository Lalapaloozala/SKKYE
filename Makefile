
a.out: main.o internet_client.h internet_server.h LL.h profiles.h quiz.h Personal_Info.h
        g++ -O3 main.o -lboost_system -lboost_thread -pthread -g -Wall -Wextra -std=c++11 main.o

main.o: main.cc internet_client.h internet_server.h LL.h profiles.h quiz.h Personal_Info.h
        g++ -O3 -c main.cc -lboost_system -lboost_thread -pthread -g -Wall -Wextra -std=c++11 -c main.cc

clean:
        rm -f a.out core *.o

