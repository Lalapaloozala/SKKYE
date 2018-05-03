#include <iostream>
#include <algorithm>
#include <iomanip>
#include <sstream>

using namespace std;


    class Node {
      private:
        int input;
        Node *next;
        Node *prev;

      public:
        Node() {
            input = 0;
            next = NULL;
            prev = NULL;
        };

        Node(int x) {
            x = input;
            next = NULL;
            prev = NULL;
        };

        int getInput() {
            return input;
        }

        void setInput(int x) {
            input = x;
        }

        Node *getNext() {
            return next;
        }

        Node *getPrev() {
            return prev;
        }

        void setNext(Node *n) {
            next = n;
        }

        void setPrev(Node *p) {
            prev = p;
        }

    };

 class LL {
    private:
        Node *head = NULL;
        Node *tail = NULL;
        int size = 0;

    public:
        LL() {}
        ~LL() {
            while (head) {
                Node *temp = head;
                head = head->getNext();
                delete temp;
            }
        }
        int getSize() {
            return size;
        }

        int insertAtBeginning(int x) {
            Node *top = new Node {x};
            if (size == 0) {
                head = top;
                tail = top;
            } else {
                top -> setNext(head);
                head -> setPrev(top);
                head = top;
            }
            size++;
        }

        int insertAtEnd(int x) {
            Node *bottom = new Node {x};
            if (size == 0) {
                tail = bottom;
                head = bottom;
            } else {
                tail -> setNext(bottom);
                bottom -> setPrev(tail);
                tail = bottom;
            }
            size++;
        }
    };

