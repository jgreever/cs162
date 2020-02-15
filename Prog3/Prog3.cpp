/* Justin Greever
 * CS162  * Program 3
 * 2/6/2020
 *
 * This program will help keep track of my favorite activities.
 * It will keep track of the following:
 * a. Name of the activity
 * b. Where it is located
 * c. Time of year
 * d. Description (130 chars max)
 * e. Thoughts on why its my favorite and why I recoomend it (200 chars max)
 * f. Supplies requires/attire
 * g. Specific date/date range
 * This will be done using functions and structures. Arrays will be a huge
 * part of this program as well. A search feature and ability to display the 
 * results will be included. Here we go!
 */

#include <iostream>
#include <fstream>
#include <cctype>
#include <cstring>
using namespace std;

/* Constants */

/* Classes */
class activities /* This will be our class to handle our input */
{
  public:
    activities();   //constructor
    void read();
    void display();
  private:
    char activity[26];
    char location[56];
    char timeOfYear[11];
    char description[131];
    char thoughts[131];
    char supplies[131];
    char dateRange[21];
};

/* main() */
int main()
{
  activities getact; 
  getact.read();
  getact.display();
  return 0;
}

/* Functions */
activities::activities()
{
  activity[0] = '\0';
  location[0] = '\0';
  timeOfYear[0] = '\0';
  description[0] = '\0';
  thoughts[0] = '\0';
  supplies[0] = '\0';
  dateRange[0] = '\0';
}

void activities::read()
{
  cout << "Please type the name of the activity (25 characters max): "
       << endl;
  cin.get(activity, 26, '\n');
  cin.ignore(100, '\n');
  cout << "Please type in the location for the activity (55 characters max): "
       << endl;
  cin.get(location, 56, '\n');
  cin.ignore(100, '\n');
  cout << "Please type the time of year for the activity (10 characters max): "
       << endl;
  cin.get(timeOfYear, 11, '\n');
  cin.ignore(100, '\n');
  cout << "Please enter a description of the activity (130 characters max): "
       << endl;
  cin.get(description, 131, '\n');
  cin.ignore(100, '\n');
  cout << "Please enter your thoughts on the activity (130 characters max): "
       << endl;
  cin.get(thoughts, 131, '\n');
  cin.ignore(100, '\n');
  cout << "Please type any supplies you will need (130 characters max): "
       << endl;
  cin.get(supplies, 131, '\n');
  cin.ignore(100, '\n');
  cout << "Please type the date/date range for the activity (20 characters max): "
       << endl;
  cin.get(dateRange, 21, '\n');
  cin.ignore(100, '\n');
}

void activities::display()
{
  cout << "Activity: " << activity << endl;
  cout << "Location: " << location << endl;
  cout << "Time of Year: " << timeOfYear << endl;
  cout << "Description: " << description << endl;
  cout << "Thoughts: " << thoughts << endl;
  cout << "Supplies: " << supplies << endl;
  cout << "Date/Date Range: " << dateRange << endl;
}
