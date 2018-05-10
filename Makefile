
a.out: main.o simpler_client.o simpler_server.o internet_client.h internet_server.h LL.h profiles.h quiz.h Personal_Info.h
        g++ -g -Wall -Wextra -std=c++17 main.o

main.o: main.cc simpler_client.cc simpler_server.cc internet_client.h internet_server.h LL.h profiles.h quiz.h Personal_Info.h
        g++ -g -Wall -Wextra -std=c++17 -c main.cc

clean:
        rm -f a.out core *.o

