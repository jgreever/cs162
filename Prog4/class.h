/*
 * Justin Greever
 * CS162
 * Program 4
 * 3/1/2020 [Code split to files poperly on this date]
 * This program will take an activity from a user
 * and store it using nodes. It will allow the user to
 * load from a file, save to a file, enter a new activity
 * and search and display activities. It will keep track 
 * of the activity, dates, time of year, thoughts, description
 * supplies, and location.
 */

#include <iostream>
#include <fstream>
#include <cctype>
#include <cstring>

using namespace std;

struct node
{
  char * data;
  struct node * next;
};

class activities
{
  public:
    activities()
    {
      head = NULL;
      tail = NULL;
      current = NULL;
      previous = NULL;
    }
//    ~activities();
    void load();
    void add();
    void search();
    void display();
    void save();
    void displayAll();

  private:
    struct node * head;
    struct node * tail;
    struct node * current;
    struct node * previous;
};
