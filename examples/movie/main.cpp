#include "movies.h"
/* Justin Greever
 * This program will manage the movie collection.
 */

int main()
{
  /* variables */
  movie sci_fi[MOVIES];
  movie drama[MOVIES];
  movie list[MOVIES];

  int num = load(list);

  for(int i = 0; i < num; ++i)
    cout << list[i].title << endl;

  movie a_movie; //testing one movie
  read_movie(a_movie);
  read_review();
  save_to_file(a_movie);
  cout << "Now sci fi: ";
  read_movie(sci_fi[0]); // testing again with one sci fi movie
  save_to_file(sci_fi[0]);
  cout << "We read in to test our program: " << a_movie.title << endl << "For sci fi we got: " << sci_fi[0].title << endl;

  return 0;
}
