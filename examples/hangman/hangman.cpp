#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;

/* 
 * Justin Greever
 * CS162
 * Hangman - This is a hangman program
 * that will teach me how to use functions
 * and create my own instead of putting
 * all code in the 'int main()' section.
 */

/* Constants - globally so that all functions have access 
 * use UPPERCASE so you can find constants easier
 */
const int SIZE = 21; /* MAX 20 character word + 1 character for '\0' */

/* Prototype - telling the compiler that new functions exist */
void rules(); /* Explins the rules of the program */
int get_secret(char secret_word[]);
int player_guess(char player_word[]);

int main()
{
  char secret[SIZE]; /* Holds players secret word to be guessed */
  char answer[SIZE]; /* Start as underscores */
  char pguess[1]; /* Holds players guess */
  int len = 0; /* length of the secret word */

  rules(); /* Explain the rules in this function call */
  len = get_secret(secret); /* get the secret word from the user */

  cout << "Testing the length is: " << len << endl
    << "And the secret word is: " << secret << endl << endl;

  player_guess(pguess);
  cout << pguess;
  cout << "Thank you for paying the hangman game!!! \n\n";
  return 0;
}

/* code function after main */
/* This function will explain the rules on how to
 * use the hangman program to the user 
 */
void rules()
{
  cout << "Welcome to the Hangman Game! \n\n"
    << "This is a two player game. One player selects"
    << "a secret word\nand the other player guesses.";
  cout << "Let's have fun!!!" << endl << endl;
}

/* prompt and read in the secret word */
int get_secret(char secret[])
{
  cout << "Player 1, please enter the secret word: ";
  cin.width(SIZE);
  cin >> secret;
  cin.ignore(100, '\n');

  /* clear the screen */
  for (int i = 0; i < 100; ++i)
    cout << '\n';

  /* return the length of the secret word */
  return strlen(secret);
}

/* prompt user to guess a letter */
int player_guess(char pguess[])
{
  cout << "Player 2, please guess and enter a letter: ";
  cin >> pguess;
  cin.ignore(100, '\n');
  return pguess[0];
}
