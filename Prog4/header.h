/* header.h
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

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

//class node; // forward declaration so we can pass head

class nlist
{
  public:
    nlist();
//    ~nlist();
    void newAct();
    void displayAct(nlist * newList);
    bool compareName(char toMatch[]);
  private:
    char * activity;
    char * location;
    char * timeOfYear;
    char * description;
    char * thoughts;
    char * supplies;
    char * dateRange;
};

class activities
{
  public:
    activities();
//    ~activities();
    void readIn();
    void displayAll();
    void isMatch();
  private:
    nlist * newList;
    int numActs;
    int arraySize;
};
