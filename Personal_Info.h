#include <iostream>
#include <cstdlib>
using namespace std;

string first, last, username, password, password1;
char correct;
int x, y = 0;
bool input = true;
int tries = 0;

void die() {
    cout << "BAD INPUT\n";
    exit(0);
}

void pass_die() {
    cout << "If you can't even remember the password you just typed in, you must have bugged social media mechanics ;)\n";
    exit(0);
}

void GetName() {
    cout << "--------------------------------------------------------------" << endl;
    cout << "********************  Sign up for SKKYE!  ********************" << endl;
    cout << "--------------------------------------------------------------" << endl;
    cout << "\nEnter your first name: ";
    cin >> first;
    for (int i = 0; i < first.size(); i++) {
        if (!cin || !isalpha(first.at(i))) die();
    }
    if (islower(first.at(0))) {
        first.at(0) = toupper(first.at(0));
    }
    cout << first << endl;
   
    cout << "\nEnter your last name: ";
    cin >> last;
    for (int i = 0; i < last.size(); i++) {
        if (!cin || !isalpha(last.at(i))) die();
    }
    if (islower(last.at(0))) {
        last.at(0) = toupper(last.at(0));
    }

    cout << last << endl << endl;
}

void user_and_pass() {
    cout << first + " " + last << ", please choose a username: ";
    cin >> username;
    if (!cin) die();
    cout << "\nChoose a password: ";
    cin >> password;
    if (!cin) die();
    while (input) {
        cout << "\nEnter your password again (Yeah, we're gonna be like that): ";
        cin >> password1;
        if (!cin) die();
        if (password1 != password){
            cout << "\nPasswords do not match!\n";
            tries++;
                if(tries >= 3) { pass_die(); }
                } else {
            break;
        }
    }
}                                                                                                                                                                                                                           1,19          To

void biography(){
    cout << "\nYour next step is to create a biography, so tell us a little about yourself!" << endl;
    cin >> bio;
    if(!cin) die();
    cout << endl;
}
