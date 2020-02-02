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
const int SSIZE = 131; /* Sentence size MAX 130 */
const int PSIZE = 301; /* Paragraph size MAX 300 */

/* Prototypes Here */
void read_input(char userInput[]); /* prototype for reading input from the user */

/* Start main() */
int main()
{
  char userInput[PSIZE];

  /* Create any variables needed */
  char userInput[SSIZE];

  /* the main code goes here */
  read_input(userInput);

  /* Exit the program gracefully */
  return 0;
}

/* Create functions here */
void read_input(char userInput[]) /* this function will grab input to store for later */
{
  cout << "Enter your text below. Press enter to start a new paragraph, " << endl;
  cout << "and put a # on a blank line and press enter to quit." << endl;
  cin.get(userInput,130,'\n');
  cin.ignore(100,'\n');
  cout << userInput << endl;
}
