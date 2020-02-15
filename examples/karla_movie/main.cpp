#include "movie_list.h"

int main()
{
    /* Original test of the movie class:
    movie a_movie;
    cout << "Does anything display before I read in? ";
    a_movie.display();

    cout << "Nothing should have appeared. Let's read in a movie:"
         << endl;
    a_movie.read();
    a_movie.display();

    char test_title[TITLE];
    cout << "Enter in a test title: ";
    cin.get(test_title, TITLE, '\n');
    cin.ignore(100, '\n');

    if (a_movie.compare_title(test_title))
        cout << "YESSS, it is the SAME!!! " <<endl;
    else
        cout << "NOPE, not the same " <<endl;
*/
    //Test out the movie list class
    movie_list scifi;
    scifi.read_movies();
    scifi.display_all();
    return 0;
}
