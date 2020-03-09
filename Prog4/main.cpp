/* header.cpp
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

#include "header.h"

int main()
{
  activities acts;
  nlist li;
  acts.readIn();
  acts.displayAll();
  acts.isMatch();  //this *seems* to work, but prints "Match Found" twice
  li.~nlist();
  acts.~activities();
  return 0;
}
