#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

/* Justin Greever
 * This program will manage the movie collection.
 */

/* Global Constants */
const int TITLE = 21; /* the size of a title */
const int INFO = 131; /* the size of the informational description */
const int MOVIES = 5; /* max number of movies stored */

/* Structures */
struct movie
{
  char title[TITLE];
  char info[INFO]; /* description */
  int review;
};

/* Prototypes */
void read_movie(movie & movie_to_read); /* & means that is is not a pass-by-value */
void display_movie(movie & movie_to_display);
int read_review();

int main()
{
  /* variables */
  movie sci_fi[MOVIES];
  movie drama[MOVIES];
  movie list[MOVIES];

  movie a_movie; /* testing one movei */
  read_movie(a_movie);
  cout << "Now sci fi: ";
  read_movie(sci_fi[0]); /* testing again with one sci fi movie */

  cout << "We read in to test our program: " << a_movie.title << endl << "For sci fi we got: " << sci_fi[0].title << endl;

  return 0;
}

/* This function will prompt and read in a movie title, description, and review (0-10) */
void read_movie(char title[], char info[], int & review)
{
  /* prompt the user and read in the info */
  cout << "Please enter a movie title: ";
  cin.get(to_read.title, TITLE, '\n');
  cin.ignore(100, '\n');
  cout << "Please enter the description: ";
  cin.get(to_read.info, INFO, '\n');
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

