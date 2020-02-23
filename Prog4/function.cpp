//Justin Greever
//2/22/2020
//CS162
//Program 4
//
#include "header.h"
#include "class.h"

activity::activity()
{
    head = NULL;
    tail = NULL;
    current = NULL;
    char act = '\0';
    char loc = '\0';
    char timeoy = '\0';
    char spectime = '\0';
    char thoughts = '\0';
    char desc = '\0';
}

void activity::readact()
{
    activity newact;

    if(!head)
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