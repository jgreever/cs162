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

  for(int i = 0; i < num; ++i)
    cout << list[i].activity << endl;

  to_read(list[0]);
  to_display(list[0]);
  save_to_file(list[0]);
  cout << "We read the following information: " << list[0].activity << endl;
  return 0;
}
