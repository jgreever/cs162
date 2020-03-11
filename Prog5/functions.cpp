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

list::list(){}

void list::addNode(node * head, node * tail)
{
  char tempAct[51];
  char tempDesc[131];
  char tempPart[51];
  node * temp = new node;
  cout << "Please enter the activity or item:" << endl;
  cin.get(tempAct, 51, '\n');
  cin.ignore(100, '\n');
//  temp->activity = new char[strlen(tempAct) + 1];
  strcpy(temp->activity, tempAct);

  cout << "Please enter the description for the activity or item:" << endl;
  cin.get(tempDesc, 131, '\n');
  cin.ignore(100, '\n');
//  temp->description = new char[strlen(tempDesc) + 1];
  strcpy(temp->description, tempDesc);
  
  cout << "Please enter how often you participate in the activity or use the item:" << endl;
  cin.get(tempPart, 51, '\n');
  cin.ignore(100, '\n');
//  temp->participate = new char[strlen(tempPart) + 1];
  strcpy(temp->participate, tempPart);
  
  temp->next = NULL;
//  head = temp;

  cout << "Activity: " << temp->activity << endl;
  cout << "Description: " << temp->description << endl;
  cout << "Participate: " << temp->participate << endl;

//  node * current = head;

  if(NULL == head)
  {
    head = temp;
    tail = temp;
  }
  else
  {
    tail->next = temp;
    tail = tail->next;
  }
}

/*
    head = new node;
    strcpy(head->activity, temp->activity);
    strcpy(head->description, temp->description);
    strcpy(head->participate, temp->participate);
    head->next = NULL;
 
  }
  else
  {
    while(current != NULL)
      current = current->next;
    current->next = temp;
    temp->next = NULL;
    strcpy(current->activity, temp->activity);
    strcpy(current->description, temp->description);
    strcpy(current->participate, temp->participate);
  }
}
 */
