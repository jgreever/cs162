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

void activities::readIn()
{
  // create a node to be inserted/added
  node * current = new node;
  current->data = li.newAct();
  current->next = NULL;
  // is the list is empty?
  if(!head)
  {
    node * current = head;
    head = new node;
    head->next = current;
  }
}
