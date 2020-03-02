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

void activities::add()
{
  char add_entry[301];
  cout << "Please type the name of the " << endl;
  cout << "activity to enter: ";
  cin.get(add_entry, 301, '\n');
  cin.ignore(100, '\n');
  node * temp = new node;
  if(!head)
  {
    temp->data = strcpy(temp->data, add_entry);
    head = temp;
    tail = temp;
    temp->next = NULL;

  }
  else
  {
    temp->data = strcpy(temp->data, add_entry);
    temp->next = head;
    head = temp;
  }
}
