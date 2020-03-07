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
#include <fstream>
#include <cctype>
#include <cstring>
using namespace std;

//struct node
//{
//    activities data;
//    node * next;
//};

class activities 
{
   public:
    activities();
    ~activities();
    void read_new();
    void display();
    bool compare_subject(char to_compare[]); 
  private:
    char timeOfYear[26];
    char description[131];
    char thoughts[201];
    char supplies[131];
    char dateRange[26];
    char activity[51];
    char location[51];
};

struct node
{
  activities data;
  node * next;
};

class list
{
  private:
    //ptr->activity //TODO pointer to an activity class object
    node * head;
    node * tail;
    int numOfItems;
    int sizeOfArray;
  public:
    list();
    ~list();
    void read_in(node * & head, char & activities);
    void display_all();
    void display_match(char to_match[]);
};
