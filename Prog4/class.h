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

class node
{
  public:
    char data;
    node * next;
};

class list
{
  public:
    list();
    void add(char entry);
  private:
    node * head = NULL;
    node * tail = NULL;
    node * current = NULL;
};
