#include "activity_struct.h"

/* Justin Greever
 * CS162 - Program 3
 * 2/15/2020
 *
 * This program will keep track of activities. It will get the activity, 
 * location, time, supplies, details, thoughts, and specific time of year/date
 * for some activities. This program will check if a file exists, and attempt
 * to read input from it, if not, ask the user to input data. It will save data
 * to a file on the hard drive, and give the user the ability to search all
 * activities and see if a match is found, and if so, display it's details.
 *
 * This file contains the main() and nothing else.
 */

int main()
{
  activity list[100]; /* 100 entries for our list max, for now */
  int num = load_from_file(list); /* let's load from a txt file if present */
//  cout << num; /* used to test if file read ok and return # of activities */
  char response = 'Y';
  int i = 0;
  char menu;
  
  cout << "Which of the following would you like to do?" << endl;
//  cout << "L to load from the file" << endl;
  cout << "A to add a new activity" << endl;
  cout << "S to search for an activity" << endl;
  cout << "D to display all activities" << endl;
  cout << "Q to quit" << endl;
  cout << "Enter your choice [A, S, D, Q]: ";
//  cin >> menu;
//  cin.ignore(100, '\n');
  
  while(response == 'Y')
  {
//    if(toupper(menu) == 'L' && i < 100)
//    {
//      int num = load_from_file(list); 
//    }
    cout << "'A'dd, 'S'earch, 'D'isplay, 'Q'uit: ";
    cin >> menu;
    cin.ignore(100, '\n');

    if(toupper(menu) == 'A' && i < 100)
    {
      to_read(list[i]);
    }
    else if(toupper(menu) == 'S' && i < 100)
    {
      search_activity(list);
    }
    else if(toupper(menu) == 'D' && i < 100)
    {
      display_all(list);
    }
    else if(toupper(menu) == 'Q')
    {
      cout << "Goodbye!";
      response = 'N';
    }
    else
    {
      cout << "Continue? 'Y' or 'N': ";
      cin >> response;
      cin.ignore(100, '\n');
    }  
  }  
/*
  // Here is the bulk of main(), reading, displaying, saving, and searching
  while(toupper(response) == 'Y' && i < 100)
  {
    to_read(list[i]);
    to_display(list[i]);
    save_to_file(list[i]);
    cout << "Add another activity? Y for yes and N for no: ";
    cin >> response;
    cin.ignore(100, '\n');
  }
  
  //This function allows a user to search all activities
  cout << "Would you like to search for an entry? ";
  cin >> response;
  cin.ignore(100, '\n');
  while(toupper(response) == 'Y')
  {
    search_activity(list);
    cout << endl;
    cout << "Would you like to search again: ";
    cin >> response;
    cin.ignore(100, '\n');
  }*/
  return 0;
}
