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

/* Classes */
class activities /* This will be our class to handle our input */
{
  public:
    activities();   //constructor
    void to_read();
    void to_display();
    void to_save(activities & to_save);
    int to_load(activities myArray[]);

  private:
    char activity[26];
    char location[56];
    char timeOfYear[11];
    char description[131];
    char thoughts[131];
    char supplies[131];
    char dateRange[21];
    int numOfActivities;
    char myArray[100];
};

int to_load(activities myArray[]);
void to_save(activities & to_save);

/* main() */
int main()
{
  activities getact;
  getact.to_load(activities myArray);
  getact.to_read();
  getact.to_display();
  getact.to_save(activities & to_save);
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
  numOfActivities = '\0';
  myArray[0] = '\0';
}

void activities::to_read()
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

void activities::to_display()
{
  cout << "Activity: " << activity << endl;
  cout << "Location: " << location << endl;
  cout << "Time of Year: " << timeOfYear << endl;
  cout << "Description: " << description << endl;
  cout << "Thoughts: " << thoughts << endl;
  cout << "Supplies: " << supplies << endl;
  cout << "Date/Date Range: " << dateRange << endl;
}

int activities::to_load(activities myArray[])
{
  ifstream file_in;
  int i = 0;

  file_in.open("activities.txt");
  if(file_in)
  {
    file_in.get(myArray[i].activity, 26, '|');
    file_in.ignore(100, '|');
    while(!file_in.eof() && i < 100) /* Limiting to 100 entries for now */
    {
      file_in.get(myArray[i].location, 56, '|');
      file_in.ignore(100, '|');
      file_in.get(myArray[i].timeOfYear, 11, '|');
      file_in.ignore(100, '|');
      file_in.get(myArray[i].description, 131, '|');
      file_in.ignore(100, '|');
      file_in.get(myArray[i].thoughts, 131, '|');
      file_in.ignore(100, '|');
      file_in.get(myArray[i].supplies, 131, '|');
      file_in.ignore(100, '|');
      file_in.get(myArray[i].dateRange, 21, '|');
    }
    file_in.close();
  }
  numOfActivities = i;
  return i;
}

void activities::to_save(activities & to_save)
{
  ofstream file_out;
  file_out.open("activities.txt", ios::app);
  if(file_out)
  {
    file_out << to_save.activity << '|' << to_save.location << '|'
      << to_save.timeOfYear << '|' << to_save.description
      << '|' << to_save.thoughts << '|' << to_save.supplies
      << '|' << to_save.dateRange << endl;
  }
  file_out.close();
}
