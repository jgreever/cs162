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

#include "activity.h"

void activities::readIn()
{
  char response;
  int i = numActs;
  do
  {
    newList[i].newAct();
    ++i;
    cout << "Enter another? 'Y'es, 'N'o: ";
    cin >> response;
    cin.ignore(100, '\n');
  } while(toupper(response) == 'Y' && i < 10);
  numActs = numActs + i;
}

// this worked fine, then a change was made
// and suddenly nothing when it is called
void activities::displayAll()
{
  for(int i = 0; i < numActs; ++i)
    newList[i].displayAct();
}

void activities::isMatch()
{
  nlist li;
  char toMatch[51];
  cout << "Enter activity name to search for: ";
  cin.get(toMatch, 51, '\n');
  cin.ignore(100, '\n');
  for(int i = 0; i < numActs; ++i)
    if(newList[i].compareName(toMatch) == 0)
    {
      cout << "Match Found!";
    }
    else
      cout << "No Match Found!";
}
