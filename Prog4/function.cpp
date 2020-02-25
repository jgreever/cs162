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
#include "class.h"

activity::activity()      //Make that constructor work for us!
{
    head = NULL;          //Setting head/tail/current to 
    tail = NULL;          //null so that we dont end up 
    current = NULL;       //with garbage
    char act = '\0';      //activity 
    char loc = '\0';      //location 
    char timeoy = '\0';   //time of year
    char spectime = '\0'; //specific time(s)
    char thoughts = '\0'; //thoughts on the activity 
    char desc = '\0';     //description of activity
}

void activity::readact()  //Our first function for reading 
{                         //in activities from the user
    activity newact;

    if(!head)             //make sure we have a starting point!
        return;
    while(current != NULL)
    {
        cout << "Enter the activity name: ";
        cin >> newact.act;
        cin.ignore(100, '\0');
        cout << "Enter the description: ";
        cin >> newact.desc;
        cin.ignore(100, '\0');
        current = current -> next;
    }
}
