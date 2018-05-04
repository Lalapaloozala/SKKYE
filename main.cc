#include "quiz.h"
#include "bst.h"
#include "LL.h"
#include "profiles.h"
#include "networking.h"
using namespace std;

int total = 0;

void anwser () {
    while (cin) {
    char c;
    cin >> c;
    toupper(c);
        if (c == 'A') {
            total++;
            break;
        }
        if (c == 'B') {
            total += 2;
            break;
        }
        if (c == 'C') {
            total += 3;
            break;
        }
        if (c == 'D') {
            total += 4;
            break;
        }
        else cout << "Invalid input. Please try again.\n";
    }
}

int main() {
  
    cout << "WELCOME TO THE SKKYE PERSONALITY QUIZ!\n";
    cout << "Please anwser the following questions to the best\n";
    cout << "of your ability using answer keys A, B, C, or D.\n";
    cout << endl;
    
    cout << "1) What is your favorite color?\n";
    cout << "A) Yellow\n";
    cout << "B) Pink\n";
    cout << "C) Black\n";
    cout << "D) Blue\n";
    anwser();
    
    cout << "2) What is your favorite genre of music?\n";
    cout << "A) Rock\n";
    cout << "B) Pop\n";
    cout << "C) Electronic\n";
    cout << "D) Hip-hop / Rap\n";
    answer();
    
    cout << "3) What is your favorite movie?\n";
    cout << "A) Romantic\n";
    cout << "B) Adventure\n";
    cout << "C) Horror\n";
    cout << "D) Comedy\n";
    answer();
    
    cout << "4) What is your ideal weekend?\n";
    cout << "A) Relaxing\n";
    cout << "B) Hanging with friends\n";
    cout << "C) Hiking\n";
    cout << "D) Partying\n";
    answer();
    
    cout << "5) What is your favorite pet?\n";
    cout << "A) Cat\n";
    cout << "B) Bunny\n";
    cout << "C) Reptile\n";
    cout << "D) Dog\n";
    answer();
    
    cout << "6) What is your favorite school subject?\n";
    cout << "A) Art\n";
    cout << "B) Math\n";
    cout << "C) P.E.\n";
    cout << "D) English\n";
    answer();
    
    cout << "7) Where would you rather live?\n";
    cout << "A) Suburbs\n";
    cout << "B) Beach\n";
    cout << "C) Country\n";
    cout << "D) City\n";
    answer();
    
    cout << "8) What is your favorite drink?\n";
    cout << "A) Tea\n";
    cout << "B) Water\n";
    cout << "C) Energy drinks\n";
    cout << "D) Coffee\n";
    answer();
    
    cout << "9) Which city would you rather visit?\n";
    cout << "A) Paris\n";
    cout << "B) Amsterdam\n";
    cout << "C) Tokyo\n";
    cout << "D) Rio\n";
    answer();
    
    cout << "10) What is your favorite animal?\n";
    cout << "A) Elephant\n";
    cout << "B) Sloth\n";
    cout << "C) Snake\n";
    cout << "D) Lion\n";
    answer();

}

/* #include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

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
