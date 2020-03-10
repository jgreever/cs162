/* functions.cpp
 *
 * Justin Greever
 * CS162
 * Program 5
 * 
 * This program will use linear linked lists to
 * store data about 3 items: Name of my favorite thing,
 * description of the item, and how often I participate
 * with the item. It will store to a new LLL, display
 * contents of all items in the list, remove an item
 * by name, count the number of items in the list and
 * release all memory (destroy the lll).
 */

#include "header.h"

list::list()
{
  head = NULL;
  tail = NULL;
}

void list::addNode()
{
  item * nlist = new item();
  cout << "Please enter the activity/item name:" << endl;
  cin.get(nlist->activity);
  cin.ignore(100, '\n');
  cout << "Please enter the description:" << endl;
  cin.get(nlist->description);
  cin.ignore(100, '\n');
  cout << "Enter often do you participate/use it:" << endl;
  cin.get(nlist->activity);
  cin.ignore(100, '\n');
  node * current = head;
  node * temp = new node();
  if(NULL == head)
  {
    head = new node();
    head->data = new item();
    head->next = NULL;
  }
  else
  {
    while(current != NULL)
      current=current->next;
    current->next = temp;
    temp->next = NULL;
    temp->data = new item();
  }
  cout << head->data;
}
