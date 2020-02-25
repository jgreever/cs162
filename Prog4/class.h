//Justin Greever
//2/22/2020
//CS162
//Program 4
//This program will help keep track of user
//activites. It 'can' be used to store to a 
//file if needed, but the main points are to
//use structs/classes/nodes to create the same
//program as our last one, storing user entered
//activites with the possibility of recalling 
//from a file later.

#include "header.h"

class activity
{
    public:
        activity();
        void activity::readact();
    private:
        node *head;
        node *tail;
        node *current;
        char act[51];
        char loc[51];
        char timeoy[51];
        char spectime[51];
        char thoughts[51];
        char desc[51];
};
