#include "movies_class.h"

/* Justin Greever
 * This movie will manage video collection
 */

/* const int MOVIES=10; */ /* max num. of movies */

class movie_list
{
  public:
    movie_list(); /* constructor - initialize data members */
    void read_movies();
    void display_all();

  private:
    movie my_array[MOVIES]; /* an array of movies */
    int num_of_movies; /* number of movies entered */
};

