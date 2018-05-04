#include <iostream>
using namespace std;

class Outgoing {
  public:
    string answer;
  if(personality == 1) {
    cout << " Congrats! You are CHILL! " << endl;
    cout << "<><><><><><><><><><><><><><><>"
    cout << "A suggested friend for you is KORY_*v*" << endl; //fill in the name
    cout << "She is ... years old." << endl; //fill in pronoun and age
    cout << "She is ... ft ... in" //fill in pronoun and height
    cout << "She loves to ..." << endl; //fill in pronoun and short bio/interest/hobbies?
    friend_request();    
  }
  
  if(personality == 2) {
    cout << " Congrats! You are CHARMING! " << endl;
    cout << "<><><><><><><><><><><><><><><>"
    cout << "A suggested friend for you is KAMILAH_123<3!" << endl;
    cout << "She is 23 years old." << endl; //fill in age
    cout << "She is 6 ft tall." //fill in height
    cout << "She loves to dance and go to the beach!" << endl; //fill in short bio/interest/hobbies?
    friend_request(); 
  }
  
  if(personality == 3) {
    cout << " Congrats! You are IMAGINATIVE! " << endl;
    cout << "<><><><><><><><><><><><><><><>"
    cout << "A suggested friend for you is SALEH#$!!" << endl; 
    cout << "He is 20 years old." << endl; //fill in age
    cout << "He is 5 ft 9 in tall." //fill in height
    cout << "He loves to make movies and live on the edge!" << endl; //fill in pronoun and short bio/interest/hobbies?
    friend_request(); 
  }
  
  if(personality == 4) {
    cout << " Congrats! You are ADVENTUROUS! " << endl;
    cout << "<><><><><><><><><><><><><><><>"
    cout << "A suggested friend for you is ERIC$$$!" << endl; 
    cout << "He is 25 years old." << endl; //fill in age
    cout << "He is 6 ft tall." //fill in height
    cout << "He loves to make movies and live on the edge!" << endl; //fill in pronoun and short bio/interest/hobbies?
    friend_request(); 
  }
  
  if(personality == 5) {
    cout << " Congrats! You are OUTGOING! " << endl;
    cout << "<><><><><><><><><><><><><><><>"
    cout << "A suggested friend for you is YLEIA_XO" << endl; //fill in the name
    cout << "She is 21 years old." << endl; //fill in pronoun and age
    cout << "She is 5 ft 2 in tall.\n"; //fill in pronoun and height
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
  
  
  
    
