#include "quiz.h"
#include "LL.h"
#include "profiles.h"
#include "networking.h"
#include <vector>
#include <cstdlib>
using namespace std;

int main(){
    cout << "Welcome to SKKYE, the hottset new social media on the market!" << endl;
    cout << "Finding friends with similar interests has never been easier." << endl;
    cout << "Our top of the line personality quiz matches you with one of" << endl;
    cout << "our co-founders who you can chat with. They will set you up" << endl;
    cout << "with all of the right people from around the world! << endl;
    //set up profile - personal info
    //tell them they will take the quiz now
    quiz();
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
