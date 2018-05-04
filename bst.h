#include <iostream>
#include <algorithm>
using namespace std;


struct BST {
    char data;
    BST *left=NULL;
    BST *right = NULL;
    BST(char new_data)
    {data = new_data;}

};

//changing char to name of class
//searching through 4 profiles, tree will return 1,2,3,4 (search function will return a #)
class Tree {
    public:
        Tree(){};
        BST *head= NULL;

        void insert(BST *temp, char data1){
            if (! head) {
                BST *temp1 = new BST(data1);
                head = temp1;
                return;
            }
            else if (data1 == temp->data)
                return;
            else if (data1 < temp->data){
                if (temp->left == NULL){
                    BST *temp1 = new BST(data1);
                    temp-> left = temp1;
                    return;
                }
                insert(temp->left,data1);
            }
            else if (data1 > temp -> data) {
                if (temp -> right == NULL) {
                    BST *temp1 = new BST(data1);
                    temp -> right = temp1;
                    return;
                }
                insert(temp -> right,data1);
            }
        }

        bool find(char data1){
            BST *temp = head;
            while (temp != NULL){
 if (temp->data == data1)
                    return true;
                else if (data1 < temp -> data)
                    temp = temp->left;
                else if (data1 > temp -> data)
                    temp = temp -> right;
            }
            return false;
        }
};
