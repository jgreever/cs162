#include "activity_struct.h"

/* Justin Greever
 * CS162 - Program 3
 * 2/15/2020
 *
 * This program will keep track of activities. It will get the activity, 
 * location, time, supplies, details, thoughts, and specific time of year/date
 * for some activities. This program will check if a file exists, and attempt
 * to read input from it, if not, ask the user to input data. It will save data
 * to a file on the hard drive, and give the user the ability to search all
 * activities and see if a match is found, and if so, display it's details.
 *
 * This file contains the main() and nothing else.
 */

int main()
{
  activity list[100];
  int num = load_from_file(list);
  cout << num;
  char response = 'Y';
  int i = 0;

  while(toupper(response) == 'Y' && i < 100)
  {
    to_read(list[i]);
    to_display(list[i]);
    save_to_file(list[i]);
    cout << "Add another activity? Y for yes and N for no: ";
    cin >> response;
    cin.ignore(100, '\n');
  }
  show_all(list);
  cout << "Would you like to search for an entry? ";
  cin >> response;
  if(toupper(response) == 'Y')
  {
   show_all(list);
  }
  return 0;
}
