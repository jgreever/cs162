/* Justin Greever
 * 1/31/2020
 * CS162
 * PSU Register Program
 *
 * This program will allow a user to enter information
 * in to register for a class, assuming they already
 * have the class list.
 */

#include <iostream>
using namespace std;

void read_name(char first[], char last[]);

int main()
{

  return 0;
}

void read_name(char first[], char last[])
{
  cout << "Please enter your first name: ";
  cin.get(first,41,'\n');
  cout << "Please enter your last name: ";
  cin.get(last,41,'\n');
cout << "You entered: " << first << last << endl;
}
