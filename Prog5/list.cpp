/* functions.cpp
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

list::list(){}
list::~list()
{
  if(head != NULL)
    delete [] head;
  head = NULL;
}

int list::addNode(node * & head) // let's add a node and fill it with stuff!
{
  char tempAct[51];
  char tempDesc[131];
  char tempPart[51];
  int counter = 0;
  node * temp = new node;
  cout << "Please enter the activity or item:" << endl;
  cin.get(tempAct, 51, '\n');
  cin.ignore(100, '\n');
  strcpy(temp->activity, tempAct);
  
  cout << "Please enter the description for the activity or item:" << endl;
  cin.get(tempDesc, 131, '\n');
  cin.ignore(100, '\n');
  strcpy(temp->description, tempDesc);

  cout << "Please enter how often you participate in the activity or use the item:" << endl;
  cin.get(tempPart, 51, '\n');
  cin.ignore(100, '\n');
  strcpy(temp->participate, tempPart);
  temp->next = NULL;

  if(!head)
  {
    head = new node;
    strcpy(head->activity, temp->activity);
    strcpy(head->description, temp->description);
    strcpy(head->participate, temp->participate);
    head->next = NULL;
    counter = 1;
  }
  else
  {
    node * current = head;
    while(current->next)
      current = current->next;
    current->next = new node;
    current = current->next;
    strcpy(current->activity, temp->activity);
    strcpy(current->description, temp->description);
    strcpy(current->participate, temp->participate);
    current->next = NULL;
    counter = counter + 1;
  }
  return counter;

}

void list::displayAll(node * head) // let's display all dem activities!
{
  if(head)
  {
    cout << "Activity: " << head->activity << endl;
    cout << "Description: " << head->description << endl;
    cout << "Participate: " << head->participate << endl;
    cout << "********************************************" << endl; // give a visual seperation of nodes
    cout << endl; // gotta love that new line smell xD
    displayAll(head->next);
  }
}

void list::deleteNode(node * & head)
{
  node * temp = new node;
  node * current = new node;
  node * previous = new node;
  char * match;
  cout << "Enter the activity name to delete: ";
  cin >> *match;
  cin.ignore(100, '\n');
  if(!head)
    return;
  if(strcmp(head->activity, match) == 0)
  {
    temp = head->next;
    delete head;
    head = temp;
  }
  while(current && strcmp(current->activity, match) != 0)
  {
    previous = current;
    current = current->next;
  }
  if(current != NULL)
  {
    previous->next = current->next;
    delete current;
  }
}
