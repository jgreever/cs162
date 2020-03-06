/* Justin Greever
 * CS162
 * Program 4 - Store activities in a LLL using
 * nodes and classes/structures. The objective
 * is to store the following information in the
 * LLL:
 * Activity Name
 * Description
 * Location
 * Time of Year
 * Thoughts
 * Supplies
 * Date(s)
 * 
 * The user will be able to Add/Delete/View entries
 * using this program. If possible, they will be able
 * to load and save to a text file as well as store
 * the items in alphabetical order using the activity
 * name.
 */

#include "list.h"

activities::activities()
{
  timeOfYear[0] = '\0';
  description[0] = '\0';
  thoughts[0] = '\0';
  supplies[0] = '\0';
  dateRange[0] = '\0';
  activity[0] = '\0';
  location[0] = '\0';
}

list::list()
{
  head = NULL;
  tail = NULL;
  numOfItems = 0;
  sizeOfArray = 0;
}

void list::read_in()
{
  if(NULL == head)
  {
    head = new node;
    head->data = activities;
    head->next = NULL;
  }
}

void activities::read_new()
{
  activities newAct;
  cout << "Please enter the activity name: ";
  cin.get(newAct.activity, 51, '\0');
  cin.ignore(100, '\n');
}
