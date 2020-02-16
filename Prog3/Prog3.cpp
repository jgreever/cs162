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
class act_data
{
  public:
    act_data(); /* constructor */
    int fLoad(); /* load data from file */
    void fSave(); /* save data to file */
    void to_display(); /* display data */
    void to_read(); /* read data from user input */

  private:
    char ptimeOfYear[11];
    char pdescription[131];
    char pthoughts[131];
    char psupplies[131];
    char pdateRange[21];
    char pmyArray[100];
    char pactivity[26];
    char plocation[56];

};

act_data::act_data() /* constructor - initialize data members */
{
  ptimeOfYear[0] = '\0';
  pdescription[0] = '\0';
  pthoughts[0] = '\0';
  psupplies[0] = '\0';
  pdateRange[0] = '\0';
  pmyArray[0] = '\0';
  pactivity[0] = '\0';
  plocation[0] = '\0';
}

/* Structures */
struct activities
{
  char timeOfYear[11];
  char description[131];
  char thoughts[131];
  char supplies[131];
  char dateRange[21];
  char myArray[100];
  char activity[26];
  char location[56];
};

/* prototypes */
int fLoad(activities array[]);
void fSave(activities & to_save);
void to_display(activities & act_to_show);
void to_read(activities & to_read);

/* main() */
int main()
{
  act_data a_acts[100];
  fLoad(a_acts array);
  to_read(a_acts & to_read);
  to_display(a_acts & to_display);
  fSave(a_acts array[0]);
  return 0;
}

void to_read(activities & to_read)
{
  cout << "Please type the name of the activity (25 characters max): "
    << endl;
  cin.get(to_read.activity, 26, '\n');
  cin.ignore(100, '\n');
  cout << "Please type in the location for the activity (55 characters max): "
    << endl;
  cin.get(to_read.location, 56, '\n');
  cin.ignore(100, '\n');
  cout << "Please type the time of year for the activity (10 characters max): "
    << endl;
  cin.get(to_read.timeOfYear, 11, '\n');
  cin.ignore(100, '\n');
  cout << "Please enter a description of the activity (130 characters max): "
    << endl;
  cin.get(to_read.description, 131, '\n');
  cin.ignore(100, '\n');
  cout << "Please enter your thoughts on the activity (130 characters max): "
    << endl;
  cin.get(to_read.thoughts, 131, '\n');
  cin.ignore(100, '\n');
  cout << "Please type any supplies you will need (130 characters max): "
    << endl;
  cin.get(to_read.supplies, 131, '\n');
  cin.ignore(100, '\n');
  cout << "Please type the date/date range for the activity (20 characters max): "
    << endl;
  cin.get(to_read.dateRange, 21, '\n');
  cin.ignore(100, '\n');
}

void to_display(activities & to_display)
{
  cout << "Activity: " << to_display.activity << endl;
  cout << "Location: " << to_display.location << endl;
  cout << "Time of Year: " << to_display.timeOfYear << endl;
  cout << "Description: " << to_display.description << endl;
  cout << "Thoughts: " << to_display.thoughts << endl;
  cout << "Supplies: " << to_display.supplies << endl;
  cout << "Date/Date Range: " << to_display.dateRange << endl;
}

int fLoad(activities myArray[])
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
  return i;
}

void fSave(activities & to_save)
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
