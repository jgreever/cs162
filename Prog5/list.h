/* header.h
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

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

class node
{
  public:
    char activity[51];
    char description[131];
    char participate[51];
    node * next;
};

class list
{
  public:
    list();
    ~list();
    int addNode(node * & head);
    void displayAll(node * head);
    void deleteNode(node * & head);
  private:
    node * head;
};

int addNode();
void displayAll();
void deleteNode();
