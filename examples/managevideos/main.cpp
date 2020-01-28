#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

/* Justin Greever
 * This program will manage the movie collection.
 */

const int TITLE = 21; /* the size of a title */
const int INFO = 131; /* the size of the informational description */

/* Prototypes */
void read_movie(char title[], char info[], int & review); /* & means that is is not a pass-by-value */
int read_movie(char title[], char info[]); /* returns the review */
void display_movie(char title[], char info[], int review);
int read_review();

int main()
{
  /* variables */
  char title[TITLE];
  char info[INFO];
  int review = 0;

  read_movie(title, info, review);

  cout << "We got: " << title << '\n' << info << '\t' << review << endl;

  return 0;
}

/* This function will prompt and read in a movie title, description, and review (0-10) */
void read_movie(char title[], char info[], int & review)
{
  /* prompt the user and read in the info */
  cout << "Please enter a movie title: ";
  cin.get(title, TITLE, '\n');
  cin.ignore(100, '\n');
  cout << "Please enter the description: ";
  cin.get(info, INFO, '\n');
  cin.ignore(100, '\n');
  review = read_review();
}
  /* Prompt and read in review */
  int read_review()
  {
    int review = 0;
    do
    {
      cout << "Enter a review from 0-10, 0 is poor, 10 is amazing: ";
      cin >> review;
      cin.ignore(100, '\n');

      if(review < 0 || review > 10) /* not valid review numbers */
        cout << "Please try again, vaild reviews are 0-10!" << endl;
    } while (review < 0 || review > 10);

    return review;
  }

