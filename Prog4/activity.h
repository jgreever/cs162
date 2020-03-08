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

activities::activities()
{
  newList = new nlist[10];
  numActs = 0;
  arraySize = 0;
}
/*
   activities::~activities()
   {
   if(newList != NULL)
   delete [] newList;
   newList = NULL;
   cout << "Deleted dynamically allocated array." << endl;
   }
   */
