/* Justin Greever
 * 1/31/2020
 * CS162
 * PSU Register Program
 *
 * This program will allow a user to enter information
 * in to register for a class, assuming they already
 * have the class list.
 */

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

const int SIZE = 41;

void read_name(char first[], char last[]);
void read_registration(int & crn, char courseDesignator[], int & sectionNumber);
/* bool again(); */

int main()
{
  char first[SIZE];
  char last[SIZE];
  int crn = 0;
  char courseDesignator[SIZE];
  int sectionNumber = 0;
  read_name(first, last);

  read_registration(crn, courseDesignator, sectionNumber);

  cout << "Name: " << first << " " << last << endl;
  cout << "CRN: " << crn << endl;
  cout << "Course Designator: " << courseDesignator << endl;
  cout << "Section Number: " << sectionNumber << endl;
 
/*  again();
  bool userResponse = again();

  while(userResponse == true)
  {
    read_registration(crn, courseDesignator, sectionNumber);
  }
 */
  return 0;
}

void read_name(char first[], char last[])
{
  cout << "Please enter your first name: ";
  cin.get(first,41,'\n');
  cin.ignore(100,'\n');
  cout << first << endl;

  cout << "Please enter your last name: ";
  cin.get(last,41,'\n');
  cin.ignore(100,'\n');
  cout << last << endl;
  
  cout << "You entered: " << first << " " << last << endl;
}

void read_registration(int & crn, char courseDesignator[], int & sectionNumber)
{
  cout << "Please enter the 6 digit CRN: ";
  cin >> crn;
  cin.ignore(100,'\n');
  cout << crn << endl;

  cout << "Please enter the Course Designator: ";
  cin.get(courseDesignator,41,'\n');
  cin.ignore(100,'\n');
  cout << courseDesignator << endl;

  cout << "Please enter the Section Number: ";
  cin >> sectionNumber;
  cin.ignore(100,'\n');
  cout << sectionNumber << endl;
}

/* bool again()
{
  char response;
  cin >> response;
  if(response != 'Y' && response != 'y')
  {
    cout << "Please type Y for yes, and N for no." << endl;
    cin >> response;
  }
  else
  {
    return true;
  }
}
 */
