#include "quiz.h"
#include "Personal_Info.h"
#include "LL.h"
#include "profiles.h"
#include "internet_server.h"
#include "internet_client.h"

#include <vector>
#include <cstdlib>
using namespace std;

LL taco;
Tree myTree;
Personality kbear2;

int main(){
    for (int i = 0; i < 5; i++) {
        myTree.insert(i + 1);
    }
    
    cout << endl;
    cout << "--------------------------------------------------------------" << endl;
    cout << "Welcome to SKKYE, the hottset new social media on the market!" << endl;
    cout << "Finding friends with similar interests has never been easier." << endl;
    cout << "Our top of the line personality quiz matches you with one of" << endl;
    cout << "our co-founders who you can chat with. They will set you up" << endl;
    cout << "with all of the right people from around the world!" << endl;
    cout << "--------------------------------------------------------------" << endl;
    cout << endl;
    
    
    GetName();
    taco.insertAtBeginning(first);
    taco.insertAtEnd(last);
    user_and_pass();
    taco.insertAtEnd(username);
    taco.insertAtEnd(password);
    
    biography();
    taco.insertAtEnd(bio);
    

    Kbear1 Kbear1;
    Kbear1.quiz(); //take the quiz
    cout << "--------------------------------------------------------------" << endl;
    cout << "******************    Your score is " << total << ".    *******************" << endl;
    cout << "--------------------------------------------------------------" << endl;
    int type = 0;
    if (total >= 12 && total <= 20) personality = myTree.find(1);
    if (total >= 21 && total <= 30) personality = myTree.find(2);
    if (total >= 31 && total <= 40) personality = myTree.find(3); 
    if (total >= 41 && total <= 50) personality = myTree.find(4);
    if (total >= 51 && total <= 60) personality = myTree.find(5);
    kbear2.match (type); //match with co-founder and add or don't add friend
    cout << endl;
}
