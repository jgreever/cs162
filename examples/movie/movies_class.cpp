#include "movies_class.h"

/* Justin Greever
 * This program will manage the movie collection.
 */

movie::movie() /* constructor - initialize data members */
{
  title[0] = '\0';
  info[0] = '\0';
  review = 0;
}

/* read from the user info about a movie and store it
 * in the data members 
 */
void movie::read()
{
  cout << "Please enter the tite: ";
  cin.get(title, TITLE, '\n');
  cin.ignore(100, '\n');
  cout << "Please enter information about this movie: ";
  cin.get(info, INFO, '\n');
  cin.ignore(100, '\n');
  cout << "Please enter the review from 0 to 10: ";
  cin >> review;
  cin.ignore(100, '\n');
}

/* display/echo back what the user entered
 */
void movie::display()
{
  if(title[0] != '\0')
    cout << title << endl << info << endl << "Review is: " << review << endl;
}

/* compare the title sent in as argument to see if it is
 * a match, retur ntrue if it is 
 */
bool movie::compare_title(char title_to_match[])
{
  if(strcmp(title_to_match, title) == 0)
    return true;
  return false;
}

