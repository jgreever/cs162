/* header.h
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

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

struct node
{
  char favorite;
  char description;
  char participate;
  struct node * next;
};

class list
{
  private:
    node * head;
    node * tail;
  public:
    list()
    {
      head = NULL;
      tail = NULL;
    }
};

void addNode(char name, char desc, char part);

