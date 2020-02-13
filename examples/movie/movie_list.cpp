#include "movie_list.h"

movie_list::movie_list() /* constructor - initialize data members */
{
  num_of_movies = 0;
}

/* read in a bunch of movies */
void movie_list::read_movies()
{
  char response;
  int i = num_of_movies; /* start where we left off last */
  do
  {
    my_array[i].read();
    cout << "Again? ";
    cin >> response;
    cin.ignore(100, '\n');
  }while(toupper(response) == 'Y' && i < MOVIES);
  num_of_movies = i;
}
void movie_list::display_all()
{
  int i = num_of_movies;
  for(i = 0; i < num_of_movies; ++i)
    my_array[i].display();
}
