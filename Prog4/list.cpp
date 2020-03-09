/* list.cpp
 *
 * Justin Greever
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

void nlist::newAct()
{
  char act[51];
  char loc[51];
  char toy[26];
  char desc[131];
  char tho[201];
  char sup[131];
  char dran[26];

  //creating dynamically allocated arrays after each
  //data field has been inputed. I believe this is
  //working as intended. I haven't had it crash
  //or have a compile error about them, yet.
  cout << "Enter activity name:" << endl;
  cin.get(act, 51, '\n');
  cin.ignore(100, '\n');
  activity = new char[strlen(act) + 1];
  cout << "Enter the location:" << endl;
  cin.get(loc, 51, '\n');
  cin.ignore(100, '\n');
  location = new char[strlen(loc) + 1];
  cout << "Enter the time of year:" << endl;
  cin.get(toy, 26, '\n');
  cin.ignore(100, '\n');
  timeOfYear = new char[strlen(toy) + 1];
  cout << "Enter a description of the activity:" << endl;
  cin.get(desc, 131, '\n');
  cin.ignore(100, '\n');
  description = new char[strlen(desc) + 1];
  cout << "Enter any thoughts on the activity:" << endl;
  cin.get(tho, 201, '\n');
  cin.ignore(100, '\n');
  thoughts = new char[strlen(tho) + 1];
  cout << "Enter supplied needed:" << endl;
  cin.get(sup, 131, '\n');
  cin.ignore(100, '\n');
  supplies = new char[strlen(sup) + 1];
  cout << "Enter the date range for the activity:" << endl;
  cin.get(dran, 26, '\n');
  cin.ignore(100, '\n');
  dateRange = new char[strlen(dran) + 1];
  cout << "***************************************" << endl; //TESTING
}

// this function doesn't seem to do anything
void nlist::displayAct(nlist * newList)
{
  if(newList->activity[0] != '\0')
    cout << newList->activity << endl << newList->location << endl
         << newList->timeOfYear << endl << newList->description << endl
         << newList->thoughts << endl << newList->supplies << endl
         << newList->dateRange << endl;
}

bool nlist::compareName(char toMatch[])
{
  if(strcmp(toMatch, activity) == 0)
    return true;
  else
    return false;
}
