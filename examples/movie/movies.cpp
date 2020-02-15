#include "movies.h"
/* Justin Greever
 * This program will manage the movie collection.
 */

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
  file_out.open("movies.txt", ios::app);
  if(file_out) /* I'm connected!!! */
  {
    /*Now I can write out to the file
     * Remember I hve to consider how to read it back
     * Let's plan: title|information|review\n
     */
    file_out << to_save.title << '|' << to_save.info << '|'
      << to_save.review << endl;
  }
  file_out.close();
}

/* This function will prompt and read in a movie title, description, and review (0-10) */
void read_movie(movie & to_read)
{
  /* prompt the user and read in the info */
  cout << "Please enter a movie title: ";
  cin.get(to_read.title, TITLE, '\n');
  cin.ignore(100, '\n');
  cout << "Please enter the description: ";
  cin.get(to_read.info, INFO, '\n');
  cin.ignore(100, '\n');
  to_read.review = read_review();
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

