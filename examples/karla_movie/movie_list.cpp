#include "movie_list.h"

//My name, purpose of the code in this file
//The purpose of this file is to implement the code for the
//list of movies

/* Here are my data members:
       movie my_array[MOVIES]; //an array of movies!
       int num_of_movies;      //number of movies entered so far
       */

movie_list::movie_list() //constructor - initialize data members
{
    num_of_movies = 0;
}
//Read in a bunch of movies
void movie_list::read_movies()
{
    char response;
    int i = num_of_movies; //start where we left off
    do
    {
        my_array[i].read();
        ++i; //count this movie
        cout << "Again? ";
        cin >> response;
        cin.ignore(100, '\n');
    } while (toupper(response) == 'Y' && i < MOVIES);
    num_of_movies = i;
}

void movie_list::display_all() //display all movies
{
    for (int i = 0; i < num_of_movies; ++i)
        my_array[i].display();
}
