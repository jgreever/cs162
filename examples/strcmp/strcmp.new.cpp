#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
/*  char firstWord[21];
  char secondWord[21];

  cout << "Enter the first word to compare: ";
  cin >> firstWord;
  cin.ignore(100, '\n');
  cout << "Enter the second word to compare: ";
  cin >> secondWord;
  cin.ignore(100, '\n');
 */
  if(strcmp("#45","$45") <= 0)
    cout << "We have a match!" << endl;
  else
    cout << "Not a match." << endl;

  return 0;
}
