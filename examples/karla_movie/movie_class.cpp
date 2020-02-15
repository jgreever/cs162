#include "movie_class.h"

//my name and the purpose of the program
//This program is managing a movie (and maybe at some point
//a list of movies using structures)
/* Data members are:
    char title[TITLE];
    char info[INFO]; //description
    int review;
    */

movie::movie()   //constructor- initialize data members
{
    title[0] = '\0';
    info[0] = '\0';
    review = 0;
}

//Read from the user information about a movie and store it in
//the data members
void movie::read()
{
    cout << "Please enter the title: ";
    cin.get(title, TITLE, '\n');
    cin.ignore(100, '\n');
    cout << "Please enter information about this movie: ";
    cin.get(info, INFO, '\n');
    cin.ignore(100, '\n');
    cout << "Please enter the review 0-10: ";
    cin >> review;
    cin.ignore(100, '\n');
}
void movie::display()
{
    if (title[0] != '\0')
         cout << title << endl << info << endl << "Review is: " 
              << review <<endl;
}

//Compare the title sent in as an argument to see if it is
//a match, return true if it is
bool movie::compare_title(char title_to_match[])
{
    if (strcmp(title_to_match, title) == 0)
        return true;
    return false;
}

