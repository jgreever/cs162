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

list::list(){}

list list::newAct()
{
  list li;
  // ask user to input data
  cout << "Please enter the activity name: ";
  cin.get(li.activity, 51, '\n');
  cin.ignore(100, '\n');
  cout << endl;
  
  return li;
}
