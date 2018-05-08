
a.out: main.o LL.h profiles.h quiz.h networking.h bst.h Personal_Info.h
        g++ -g -Wall -Wextra -std=c++17 main.o

main.o: main.cc LL.h profiles.h quiz.h networking.h bst.h Personal_Info.h
        g++ -g -Wall -Wextra -std=c++17 -c main.cc

clean:
        rm -f a.out core *.o

