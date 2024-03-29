/* main.cpp
 *
 * Justin Greever
 * CS162
 * Program 5
 * 3/7/2020
 *
 * This program will use linear linked lists to
 * store data about 3 items: Name of my favorite thing,
 * description of the item, and how often I participate
 * with the item. It will store to a new LLL, display
 * contents of all items in the list, remove an item
 * by name, count the number of items in the list and
 * release all memory (destroy the lll).
 */

#include "list.h"

int main()
{
  node * head = NULL;
  list li;
  int nodeCount = 0;
  char response = 'Y';

  while(response == 'Y')
  {
    int nodeCounter = li.addNode(head);
    cout << "Enter new entry? (Y for yes, N for no)";
    cin >> response;
    cin.ignore(100, '\n');
    response = toupper(response);
    nodeCount = nodeCounter + nodeCount;
  }
  cout << "Node Count: " << nodeCount << endl;

  response = 'Y';
  cout << "Would you like to display all entries: ";
  cin >> response;
  cin.ignore(100, '\n');
  response = toupper(response);
  if(response == 'Y')
  {
    li.displayAll(head);
  }
  
  /* the li.deleteNode code below isn't working yet 
   * and i'm still trying to figure it out
   */
  li.deleteNode(head);
  li.~list();  // clean up anything made by new
  return 0;
}
