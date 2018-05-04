
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
    
    cout << "11) Which is your favorite Sport?\n";
    cout << "A) Basketball\n";
    cout << "B) Soccer\n";
    cout << "C) Football\n";
    cout << "D) MMA\n";
    answer();
    
    cout << "12) Which would you most like to eat?\n";
    cout << "A) Mac & Cheese\n";
    cout << "B) Sandwich\n";
    cout << "C) Sushi\n";
    cout << "D) Tacos and Beer\n";
    answer();

}
