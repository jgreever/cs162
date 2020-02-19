#include <iostream>
#include <fstream>
#include <cctype>
#include <cstring>
using namespace std;

/* Justin Greever
 * CS162 - Program 3
 * 2/15/2020
 *
 * This file contains the header information,
 * imports, classes, prototypes, and any global
 * constants if needed (such as array size or
 * max size of input)
 */
 
/* structures */
struct activity
{
  char timeOfYear[26];
  char description[131];
  char thoughts[201];
  char supplies[131];
  char dateRange[26];
  char myArray[100];
  char activity[51];
  char location[51];
};

/* prototypes */
int load_from_file(activity myArray[]);
void save_to_file(activity & activity_to_save);
void to_display(activity & activity_to_show);
void to_read(activity & activity_to_read);
void search_activity(activity myArray[]);
void display_all(activity myArray[]);

