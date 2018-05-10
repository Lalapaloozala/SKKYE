//CLEAR SCREEN(may or may not implement in our project)
//lterminfo (compiler flag)
//Can be added to out personality quiz and also when our profiles and user prompts come up
#include <term.h>
#include <unistd.h>
#include <cstdlib>

void ClearScreen() {
  if (!cur_term) {
    int result;
    setupterm(NULL, STDOUT_FILENO, &result);
    if (result <= 0)
      return;
  }
  putp(tigetstr("clear"));
}

//Clearscreen()
//cin.clear
