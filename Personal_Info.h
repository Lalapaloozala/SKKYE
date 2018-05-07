#include <iostream>
#include <cstdlib>

using namespace std;

void die(){
    cout <<"BAD INPUT\n";
    exit(0);
}

int main() {
    string first, last;
    char correct;
    int x, y = 0;
    bool input = true;

    cout << "Enter your first name: ";
    cin >> first;
    cout << "\nEnter your last name: ";
    cin >> last;
    cout << "\n";
    cout << first + " " + last << endl;

    while (input) {
        cout << "Enter your height (feet first): ";
        cin >> x;
        if(!cin) die();
        cout << "\nEnter your height (inches): ";
        cin >> y;
        if(!cin) die();
        cout << "\nYour height is " << x << " foot and " << y << " inches. Is this correct? (Y or N): ";
        cin >> correct;
        if (correct == 'n' || correct == 'N'){
        }
            if (correct == 'y' || correct == 'Y'){
                input = false;
    }
}
}
                                            

