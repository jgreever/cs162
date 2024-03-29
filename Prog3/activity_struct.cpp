#include "activity_struct.h"

/* Justin Greever
 * CS162 - Program 3
 * 2/15/2020
 *
 * This file contains the functions
 */

/* Let's read in activities from the user */
void to_read(activity & to_read)
{
  cout << "Please type the name of the activity (25 characters max): "
    << endl;
  cin.get(to_read.activity, 51, '\n');
  cin.ignore(100, '\n');
  cout << "Please type in the location for the activity (55 characters max): "
    << endl;
  cin.get(to_read.location, 51, '\n');
  cin.ignore(100, '\n');
  cout << "Please type the time of year for the activity (10 characters max): "
    << endl;
  cin.get(to_read.timeOfYear, 26, '\n');
  cin.ignore(100, '\n');
  cout << "Please enter a description of the activity (130 characters max): "
    << endl;
  cin.get(to_read.description, 131, '\n');
  cin.ignore(100, '\n');
  cout << "Please enter your thoughts on the activity (130 characters max): "
    << endl;
  cin.get(to_read.thoughts, 201, '\n');
  cin.ignore(100, '\n');
  cout << "Please type any supplies you will need (130 characters max): "
    << endl;
  cin.get(to_read.supplies, 131, '\n');
  cin.ignore(100, '\n');
  cout << "Please type the date/date range for the activity (20 characters max): "
    << endl;
  cin.get(to_read.dateRange, 26, '\n');
  cin.ignore(100, '\n');
}

/* Formats output for displaying items in list */
void to_display(activity & to_display)
{
  cout << "Activity: " << to_display.activity << endl;
  cout << "Location: " << to_display.location << endl;
  cout << "Time of Year: " << to_display.timeOfYear << endl;
  cout << "Description: " << to_display.description << endl;
  cout << "Thoughts: " << to_display.thoughts << endl;
  cout << "Supplies: " << to_display.supplies << endl;
  cout << "Date/Date Range: " << to_display.dateRange << endl;
}

/* Load activities from file, if present */
int load_from_file(activity myArray[])
{
  ifstream file_in;
  int i = 0;
  file_in.open("favorite.txt");
  if(file_in)
  {
    //    file_in.get(myArray[i].activity, 26, '|');
    //    file_in.ignore(100, '|');
    while(!file_in.eof() && i < 100) /* Limiting to 100 entries for now */
    {
      file_in.get(myArray[i].activity, 51, '#');
      file_in.ignore(100, '#');
      file_in.get(myArray[i].location, 51, '#');
      file_in.ignore(100, '#');
      file_in.get(myArray[i].timeOfYear, 26, '#');
      file_in.ignore(100, '#');
      file_in.get(myArray[i].description, 131, '#');
      file_in.ignore(100, '#');
      file_in.get(myArray[i].thoughts, 201, '#');
      file_in.ignore(100, '#');
      file_in.get(myArray[i].supplies, 131, '#');
      file_in.ignore(100, '#');
      file_in.get(myArray[i].dateRange, 26, '\n');
      file_in.ignore(100, '\n');
      ++i;
    }
    file_in.close();
  }
  return i;
}

/* Save activities to a text file */
void save_to_file(activity & to_save)
{
  ofstream file_out;
  file_out.open("favorite.txt", ios::app);
  if(file_out)
  {
    file_out << to_save.activity << '#' << to_save.location << '#'
      << to_save.timeOfYear << '#' << to_save.description
      << '#' << to_save.thoughts << '#' << to_save.supplies
      << '#' << to_save.dateRange << endl;
  }
  file_out.close();
}

/* Shows all activities, will become a search function soon */
void search_activity(activity myArray[])
{
  char search_query[26];
  cout << "Type the activity name to search for: ";
  cin >> search_query;
  cin.ignore(100, '\n');
  int total = load_from_file(myArray);
  for(int i = 0; i < (total - 1); ++i)
  {
    if(strcmp(myArray[i].activity, search_query) == 0)
    {
      cout << "*****************************************" << endl;
      cout << endl;
      cout << "Activity: " << myArray[i].activity << endl;
      cout << "Location: " << myArray[i].location << endl;
      cout << "Time of Year: " << myArray[i].timeOfYear << endl;
      cout << "Description: " << myArray[i].description << endl;
      cout << "Thoughts: " << myArray[i].thoughts << endl;
      cout << "Supplies: " << myArray[i].supplies << endl;
      cout << "Date/Date Range: " << myArray[i].dateRange << endl;
      cout << endl;
    }
  }
}

/* Display all activities */
void display_all(activity myArray[])
{
  int total = load_from_file(myArray);
  for(int i = 0; i < (total - 1); ++i)
  {
    cout << "*****************************************" << endl;
    cout << endl;
    cout << "Activity: " << myArray[i].activity << endl;
    cout << "Location: " << myArray[i].location << endl;
    cout << "Time of Year: " << myArray[i].timeOfYear << endl;
    cout << "Description: " << myArray[i].description << endl;
    cout << "Thoughts: " << myArray[i].thoughts << endl;
    cout << "Supplies: " << myArray[i].supplies << endl;
    cout << "Date/Date Range: " << myArray[i].dateRange << endl;
    cout << endl; 
  }
}
