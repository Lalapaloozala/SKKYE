
#include <iostream>
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
            total +=4;
            break;
        }else {
        cout << "Invalid input. Please try again.\n";
    }
    }
}

int main() {
  
   cout << "WELCOME TO THE SKKY PERSONALITY QUIZ!\n";
    cout << "Please anwser the following questions to th best of your ability using answer keys A, B, C, or D.\n";
    cout << endl;
    
    cout << "1) What's your favorite color?\n";
    cout << "A) Yellow\n";
    cout << "B) Pink\n";
    cout << "C) Black\n";
    cout << "D) Blue\n";
    anwser();
  
}
