/* list.h
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

nlist::nlist()
{
  /*  activity[0] = '\0';
      location[0] = '\0';
      timeOfYear[0] = '\0';
      description[0] = '\0';
      thoughts[0] = '\0';
      supplies[0] = '\0';
      dateRange[0] = '\0';
      */
}
/*
nlist::~nlist()
{
  if(activity != NULL)
  {
    delete [] activity;
    delete [] location;
    delete [] timeOfYear;
    delete [] description;
    delete [] thoughts;
    delete [] supplies;
    delete [] dateRange;
    cout << "Deleted dynamically allocated array." << endl;
  }
  activity = NULL;
  location = NULL;
  timeOfYear = NULL;
  description = NULL;
  thoughts = NULL;
  supplies = NULL;
  dateRange = NULL;
}
*/
