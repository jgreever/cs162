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
const int PSIZE = 301; /* Paragraph size MAX 300 */

/* Prototypes Here */
void read_input(char userInput[]); /* prototype for reading input from the user */
void form_paragraph(char userInput[]); /* prototype for paragraph output (tabs, caps, .!?) */
void char_count(char userInput[]); /* prototype to cound chars and words */

/* Start main() */
int main()
{
  /* local variables go here */
  char userInput[PSIZE];
  
  /* the main code goes here */
  read_input(userInput);
  form_paragraph(userInput);
  char_count(userInput);

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
  int sum = 0;
  int spaces = 0;
  int len = strlen(userInput);

  cout << "\t";

  for(int i = 0; i < len; i++)
  {
    userInput[0] = toupper(userInput[0]); 
    cout << userInput[i];
    if(userInput[i] == '\n')
    {
      cout << "\t";
      userInput[i] = toupper(userInput[i]);
    }
    if(userInput[i] == '.' || userInput[i] == '!' || userInput[i] == '?')
    {
      if(userInput[i + 1] == ' ')
      {
        cout << " ";
        userInput[i + 2] = toupper(userInput[i + 2]);
      }
      else if(isalpha(userInput[i + 1]))
      {
        cout << "  ";
        userInput[i + 1] = toupper(userInput[i + 1]);
      }
    }
  }
  //cout << "You typed " << sum << " characters and " << spaces << " words." << endl; /* <-need to fix this code */
}

void char_count(char userInput[])
{
  int characters = 0;
  int words = 0;
  
  for(i = 0; userInput[i] != '\0'; ++i)
  {
    if(userInput[i] == ' ')
    {
      words += words;
      cout << "There are " << words << " words." << endl;
    }
  }
}
