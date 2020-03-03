/*
 * Justin Greever
 * CS162
 * Program 4
 * 3/1/2020 [Code split to files poperly on this date]
 * This program will take an activity from a user
 * and store it using nodes. It will allow the user to
 * load from a file, save to a file, enter a new activity
 * and search and display activities. It will keep track 
 * of the activity, dates, time of year, thoughts, description
 * supplies, and location.
 */

#include "class.h"

int main()
{
  char entry[301];
  cout << "Enter the activity name: ";
  cin.get(entry, 301, '\n');
  cin.ignore(100, '\n');
  void add(char entry);
  return 0;
}
