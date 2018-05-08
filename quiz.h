#include <iostream>
using namespace std;

int total = 0;
class Kbear {
    protected:
void answer () {
    while (cin) {
    char c;
    cin >> c;
    c = toupper(c);
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
        if (c == 'E') {
            total += 5;
            break;
        }
        else cout << "Invalid input. Please try again.\n";
    }
}
};

class Kbear1 : public Kbear {
    public:
void quiz() {
    cout << "WELCOME TO THE SKKYE PERSONALITY QUIZ!\n";
    cout << "Please anwser the following questions to the best\n";
    cout << "of your ability using answer keys A, B, C, or D.\n";
    cout << endl;
    
    cout << "1) What is your favorite color?\n";
    cout << "A) Yellow\n";
    cout << "B) Pink\n";
    cout << "C) Red\n";
    cout << "D) Black\n";
    cout << "E) Blue\n";
    Kbear::answer();
    
    cout << "2) What is your favorite genre of music?\n";
    cout << "A) Rock\n";
    cout << "B) Pop\n";
    cout << "C) Country\n";
    cout << "D) Electronic\n";
    cout << "E) Hip-hop / Rap\n";
    Kbear::answer();
    
    cout << "3) What is your favorite movie?\n";
    cout << "A) Romantic\n";
    cout << "B) Adventure\n";
    cout << "C) Thriller\n"; 
    cout << "D) Horror\n";
    cout << "E) Comedy\n";
    Kbear::answer();
    
    cout << "4) What is your ideal weekend?\n";
    cout << "A) Relaxing\n";
    cout << "B) Hanging with friends\n";
    cout << "C) Playing Video Games\n";
    cout << "D) Hiking\n";
    cout << "E) Partying\n";
    Kbear::answer();
    
    cout << "5) What is your favorite pet?\n";
    cout << "A) Cat\n";
    cout << "B) Bunny\n";
    cout << "C) Horse\n";
    cout << "D) Snake\n";
    cout << "E) Dog\n";
    Kbear::answer();
    
    cout << "6) What is your favorite school subject?\n";
    cout << "A) Art\n";
    cout << "B) Math\n";
    cout << "C) History\n";
    cout << "D) P.E.\n";
    cout << "E) English\n";
    Kbear::answer();
    
    cout << "7) Where would you rather live?\n";
    cout << "A) Suburbs\n";
    cout << "B) Beach\n";
    cout << "C) Desert\n"; 
    cout << "D) Country\n";
    cout << "E) City\n";
    Kbear::answer();
    
    cout << "8) What is your favorite drink?\n";
    cout << "A) Tea\n";
    cout << "B) Water\n";
    cout << "C) Orange Juice\n"; 
    cout << "D) Energy Drinks/ Soda\n";
    cout << "E) Coffee\n";
    Kbear::answer();
    
    cout << "9) Which city would you rather visit?\n";
    cout << "A) Paris\n";
    cout << "B) Amsterdam\n";
    cout << "C) Osaka\n";
    cout << "D) Tokyo\n";
    cout << "E) Rio\n";
    Kbear::answer();
    
    cout << "10) What is your favorite animal?\n";
    cout << "A) Elephant\n";
    cout << "B) Sloth\n";
    cout << "C) Cat\n";
    cout << "D) Snake\n";
    cout << "E) Lion\n";
    Kbear::answer();
    
    cout << "11) Which is your favorite Sport?\n";
    cout << "A) Basketball\n";
    cout << "B) Soccer\n";
    cout << "C) Motocross\n";
    cout << "D) Football\n";
    cout << "E) MMA\n";
    Kbear::answer();
    
    cout << "12) Which would you most like to eat?\n";
    cout << "A) Mac & Cheese\n";
    cout << "B) A Sandwich\n";
    cout << "C) Pizza\n";
    cout << "D) Sushi\n";
    cout << "E) Tacos & Beer\n";
    Kbear::answer();
    
    return;
}
};
