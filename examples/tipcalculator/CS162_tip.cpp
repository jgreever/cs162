#include <iostream>
#include <cctype>
using namespace std;

// Justin Greever
// This program will help a user determine the amount of 
// a tip to leave based on total and quality of service
//
// toupper - return the uppercase value of the character passed in
// tolower - return the lowercase value of the character passed in
// isupper - check if the character passed in is upper and return T/F
// islower - check if the character passed in is lower and return T/F
//

int main()
{
	//Define Variables here
	float total = 0.0;    //The entire bill amount
	char response = 'n';  //The user is verifying the input


	//Welcome the user
	cout << "Welcome to the tip calculating program! " << endl
		<< endl << "This program will help the user calculating "
		<< "the tip to leave given\n the quality of service ";
	cout << endl << endl;

	//Get the total amount of the bill
	do
	{
		cout << "Please enter the total amount of the bill $";
		cin >> total;
		cout << "We recieved a total bill of $" << total << endl;
		cout << "Is this correct? 'Y' for Yes, 'N' for No: ";
		cin >> response;

		if (response != 'Y' &&  response != 'y')
		{
			cout << "Ok! We will try again..." <<endl;
		}
	//} while ((response !='Y' && response !='y') || total < 0.0);
        } while (toupper(response) != 'Y' || total < 0.0);
	return 0;
}
