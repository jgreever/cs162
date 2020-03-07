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

#include "header.h"

actlist::actlist(){}

void actlist::newAct()
{ //TODO Add cout prompts for user input
  cin.get(activity, 51, '\n');
  cin.ignore(100, '\n');
  cin.get(location, 51, '\n');
  cin.ignore(100, '\n');
  cin.get(timeOfYear, 26, '\n');
  cin.ignore(100, '\n');
  cin.get(description, 131, '\n');
  cin.ignore(100, '\n');
  cin.get(thoughts, 201, '\n');
  cin.ignore(100, '\n');
  cin.get(supplies, 131, '\n');
  cin.ignore(100, '\n');
  cin.get(dateRange, 26, '\n');
  cout << activity << location << timeOfYear << description << thoughts << supplies << dateRange;
}

void actlist::displayAct()
{

}

bool compareName()
{
  return true;  
}

