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
const int ISIZE = 901; /* Output paragraph max */

/* Prototypes Here */
void read_input(char userInput[]); /* prototype for reading input from the user */
void form_paragraph(char userInput[]); /* prototype for paragraph output (tabs, caps, .!?) */

/* Start main() */
int main()
{
  /* local variables go here */
  char userInput[ISIZE];

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
  cin.get(userInput,900,'#');
  cin.ignore(100,'#');
  cout << userInput << endl;
}

void form_paragraph(char userInput[]) /* this function will beautify the output formatting */
{
  int inputLength = strlen(userInput);
  userInput[0] = toupper(userInput[0]);
  cout << inputLength << endl; 
  cout << "\t" << userInput << endl;
}
