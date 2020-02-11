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
