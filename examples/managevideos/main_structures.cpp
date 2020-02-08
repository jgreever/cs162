#include <iostream>
#include <cctype>
#include <cstring>
#include <fstream>
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
int load(movie array[]);
void save_to_file(movie & my_new_movie);
void read_movie(movie & movie_to_read); /* & means that is is not a pass-by-value */
void display_movie(movie & movie_to_display);
int read_review();

int main()
{
  /* variables */
  movie sci_fi[MOVIES];
//  movie drama[MOVIES];
  movie list[MOVIES];
  int num = load(list);

  for(int i = 0; i < num; ++i)
    cout << list[i].title << endl;

  movie a_movie[MOVIES]; /* testing one movie */
  read_movie(a_movie[0]);
  read_review();
  save_to_file(a_movie[0]);
  cout << "Now sci fi: ";
  read_movie(sci_fi[0]); /* testing again with one sci fi movie */
  save_to_file(sci_fi[0]);
  cout << "We read in to test our program: " << a_movie[0].title << endl << "For sci fi we got: " << sci_fi[0].title << endl;

  return 0;
}

/* Read movies from an external file */
int load(movie array[])
{
  ifstream file_in;
  int i = 0;

  file_in.open("movie.txt");
  if(file_in) /* Connected!! */
  {
    file_in.get(array[i].title, TITLE, '|');
    file_in.ignore(100, '|');
    while(!file_in.eof() && i < MOVIES)
    {
      file_in.get(array[i].info, INFO, '|');
      file_in.ignore(100, '|');
      file_in >> array[i].review;
      file_in.ignore(100, '\n');
      ++i;

      file_in.get(array[i].title, TITLE, '|');
      file_in.ignore(100, '|');
    }
    file_in.close();
  }
  return i;
}

/* Save a movie to an external file */
void save_to_file(movie & to_save)
{
  ofstream file_out;
  file_out.open("movie.txt", ios::app);
  if(file_out) /* I'm connected!!! */
  {
    /* Now I can write out to the file
     * Remember I hve to consider how to read it back
     * Let's plan: title|information|review\n
     */
    file_out << to_save.title << '|' << to_save.info << '|'
      << to_save.review << endl;
  }
  file_out.close();
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

