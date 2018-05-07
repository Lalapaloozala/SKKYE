#include "quiz.h"
#include "LL.h"
#include "profiles.h"
#include "networking.h"
#include <vector>
#include <cstdlib>
using namespace std;


void die() {
    cout<< "INVALID INPUT" << endl;
    exit(1);
}

int main(){
    cout << "Welcome to SKKYE, the hottset new social media on the market!" << endl;
    cout << "Finding friends with similar interests has never been easier." << endl;
    cout << "Our top of the line personality quiz matches you with one of" << endl;
    cout << "our co-founders who you can chat with. They will set you up" << endl;
    cout << "with all of the right people from around the world! << endl;
    //set up profile - personal info
    //tell them they will take the quiz now
    quiz();
    cout << "Your score is " << total << "." << endl;
    int personality =0;
    if (total >= 12 && total <= 20) personality =1;
    if (total >= 21 && total <= 30) personality =2;
    if (total >= 31 && total <= 40) personality =3; 
    if (total >= 41 && total <= 50) personality =4;
    if (total >= 51 && total <= 60) personality =5;
}

/* 

void die() {
    cout << " ";
    exit (0);
}
int main() {
    Tree Bst;
    vector <char> vec;
    char letter;

    while (cin){
        cin >> letter;
        if (isdigit(letter))
            break;
        else {
            BST *temp = Bst.head;
            Bst.insert(temp,letter);
        }
    }
    while (cin) {
        cin >> letter;
        if (!cin) break;
        if (!Bst.find(letter))
            die();
        vec.push_back(letter);
    }
    for (char c: vec)
        Bst.print(c);
    cout << "" << endl;
}
*/
