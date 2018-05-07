#include <iostream>
#include <algorithm>
using namespace std;

struct BST {
    char data1;
    BST *left=NULL;
    BST *right = NULL;
    BST(char new_data) {
        data1 = new_data;
    }
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
  
void friend_request {
  cout << "Would you like to add them as a friend?" << endl;
  cout << "Enter a 1 if you would like to add them as a friend ";
  cout << "or enter a 0 if you would not like to add them as a friend." << endl;
  if (answer == 1)
    cout << "You currently have ! friend on SKKYE!" << endl;
  else if(answer == 0)
    cout << "You currently have 0 fiends on SKKYE." << endl;
  else if(answer != 1 || answer != 0)
    cout << "Sorry wrong input." << endl;
}
