/* 
 * Justin Greever
 * 1/29/2020
 * CS162
 * Program 2
 *
 * This is a very simple text entry program
 * This program will allow the user to enter text
 * and will automatically uppercase first letter
 * of each sentence, insert a tab before the first
 * sentence of each paragraph, and two spaces after
 * each period. The user will enter text normally
 * and finish by entering a # on a blank line.
 * Sentences are max of 130 chars
 * Paragraphs are max of 300 chars
 */

/* Includes here */
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

/* Globals here (CONST only!) */
const int PSIZE = 301; /* Paragraph size MAX 300 + 1 for '\0' */

/* Prototypes Here */
void read_input(char userInput[]); /* prototype for reading input from the user */
void form_paragraph(char userInput[]); /* prototype for paragraph output (tabs, caps, .!?) */

/* Start main() */
int main()
{
  /* local variables go here */
  char userInput[PSIZE];
  
  /* the main code goes here */
  read_input(userInput);
  form_paragraph(userInput);

  /* Exit the program gracefully */
  return 0;
}

/* Create functions here */
void read_input(char userInput[]) /* this function will grab input to store for later */
{
  cout << "Enter your text below. Press enter to start a new paragraph, " << endl;
  cout << "and put a # on a blank line and press enter to quit." << endl;

  cin.get(userInput,301,'#'); /* look for # and stop/ignore that character */
  cin.ignore(100,'#');
  cout << userInput << endl;
}

void form_paragraph(char userInput[]) /* this function will beautify the output formatting */
{
  //int sum = 0; /* int sum and int spaces will be used to count letters/words */
  //int spaces = 0;
  int len = strlen(userInput); /* let's get that array's size! */

  cout << "\t";

  for(int i = 0; i < len; i++)
  {
    userInput[0] = toupper(userInput[0]); 
    cout << userInput[i];
    if(userInput[i] == '\n')
    {
      cout << "\t"; /* add tab after any \n (enter press) */
      userInput[i] = toupper(userInput[i]); /* uppercase the first letter user has typed */
    }
    if(userInput[i] == '.' || userInput[i] == '!' || userInput[i] == '?') /* check for .,!,? and add spaces */
    {
      if(userInput[i + 1] == ' ') /* add space after punctuation */
      {
        cout << " ";
        userInput[i + 2] = toupper(userInput[i + 2]);
      }
      else if(isalpha(userInput[i + 1])) /* ensure first letter of each word and paragraph are uppercase */
      {
        cout << "  ";
        userInput[i + 1] = toupper(userInput[i + 1]);
      }
    }
  }
  //cout << "You typed " << sum << " characters and " << spaces << " words." << endl; /* <-need to fix this code */
}
