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

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

class actlist
{
  public:
    actlist();
//    ~actlist();
    actlist newAct();
    void displayAct();
    bool compareName();
  private:
    char activity[51];
    char location[51];
    char timeOfYear[26];
    char description[131];
    char thoughts[201];
    char supplies[131];
    char dateRange[26];
};

struct node
{
    char data;
    node * next;
};

class activities
{
  public:
    activities();
//    ~activities();
    void readIn(actlist newActList);
    void displayAll();
    void isMatch();
  private:
    actlist actL;
    node * head;
    node * current;
    node * tail;
    int numActs;
    int arraySize;
};
