#include "movie_class.h"

//My name, purpose of the code in this file
//The purpose of this header file is to outline what
//a collection (array) of movies would be like

class movie_list
{
    public:
       movie_list(); //constructor - initialize data members
       void read_movies();
       void display_all();
    private:
       movie my_array[MOVIES]; //an array of movies!
       int num_of_movies;      //number of movies entered so far
};
