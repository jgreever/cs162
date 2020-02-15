#include <iostream>
#include <cctype>
#include <cstring>
#include <fstream>
using namespace std;

//my name and the purpose of the program
//This program is managing a movie (and maybe at some point
//a list of movies using structures)

const int TITLE = 21; //The size of a title
const int INFO = 131; //The informational description size
const int MOVIES = 5; //Max number of movies allowed

class movie
{
  public:
    movie();   //constructor
    void read();
    void display();
    bool compare_title(char title_to_match[]);
  private:
    char title[TITLE];
    char info[INFO]; //description
    int review;
};

//Prototypes
int load(movie array[]);

void save_to_file(movie & my_new_movie);
void read_movie(movie & movie_to_read);
void display_movie(movie & movie_to_display);
int read_review();
