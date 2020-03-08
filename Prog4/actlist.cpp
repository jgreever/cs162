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
  cout << "Please enter the activity name:" << endl;
  cin.get(activity, 51, '\n');
  cin.ignore(100, '\n');
  cout << "Please enter the location for the activity:" << endl;
  cin.get(location, 51, '\n');
  cin.ignore(100, '\n');
  cout << "Please enter the time of year for the activity:" << endl;
  cin.get(timeOfYear, 26, '\n');
  cin.ignore(100, '\n');
  cout << "Please enter a description of the activity:" << endl;
  cin.get(description, 131, '\n');
  cin.ignore(100, '\n');
  cout << "Please enter your thoughts on the activity:" << endl;
  cin.get(thoughts, 201, '\n');
  cin.ignore(100, '\n');
  cout << "Please enter any supplied needed for the activity:" << endl;
  cin.get(supplies, 131, '\n');
  cin.ignore(100, '\n');
  cout << "Please enter the date/date range for the activity:" << endl;
  cin.get(dateRange, 26, '\n');
  cout << "Activity: " << activity << endl; 
  cout << "Location: " << location << endl;
  cout << "Time of Year: " << timeOfYear << endl;
  cout << "Description: " << description << endl;
  cout << "Thoughts: " << thoughts << endl;
  cout << "Supplies: " << supplies << endl;
  cout << "Date/Date Range: " << dateRange << endl;
}

void actlist::displayAct()
{

}

bool compareName()
{
  return true;  
}

