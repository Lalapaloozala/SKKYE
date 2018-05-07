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

class Outgoing {
  public:
    string answer;
  if(personality == 1) {
    cout << " Congrats! You are SHY! " << endl;
    cout << "<><><><><><><><><><><><><><><>"
    cout << "A suggested friend for you is..." << endl; //fill in the name
    cout << "... is ... years old." << endl; //fill in pronoun and age
    cout << "... is ... ft ... in" //fill in pronoun and height
    cout << "... loves to ..." << endl; //fill in pronoun and short bio/interest/hobbies?
    friend_request();    
  }
  if(personality == 2) {
    cout << " Congrats! You are CHARMING! " << endl;
    cout << "<><><><><><><><><><><><><><><>"
    cout << "A suggested friend for you is KAMILAH_123<3!" << endl;
    cout << "She is 23 years old." << endl; //fill in age
    cout << "She is 6' tall." //fill in height
    cout << "She loves to dance and go to the beach!" << endl; //fill in short bio/interest/hobbies?
    friend_request(); 
  }
  
  if(personality == 3) {
    cout << " Congrats! You are ADVENTUROUS! " << endl;
    cout << "<><><><><><><><><><><><><><><>"
    cout << "A suggested friend for you is ERIC$$$!" << endl; 
    cout << "He is 25 years old." << endl; //fill in age
    cout << "He is 6' tall." //fill in height
    cout << "He loves to make movies and live on the edge!" << endl; //fill in pronoun and short bio/interest/hobbies?
    friend_request(); 
  }
  
  if(personality == 4) {
    cout << " Congrats! You are OUTGOING! " << endl;
    cout << "<><><><><><><><><><><><><><><>"
    cout << "A suggested friend for you is YLEIA_XO" << endl; //fill in the name
    cout << "She is 21 years old." << endl; //fill in pronoun and age
    cout << "She is 5' tall.\n"; //fill in pronoun and height
    cout << "She loves to go to parties and hang out with friends!" << endl; //fill in pronoun and short bio/interest/hobbies?
    friend_request(); 
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
