#include <iostream>
using namespace std;

// Justin Greever
// This program will help a user determine the amount of 
// a tip to leave based on total and quality of service

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
	cout << "Please enter the total amount of the bill $";
	cin >> total;
	cout << "We recieved a total bill of $" << total << endl;
	cout << "Is this correct? 'Y' for Yes, 'N' for No: ";
	cin >> response;

	if (response != 'Y' &&  response != 'y')
	{
		cout << "Please enter the value of the bill: $";
		cin >> total;
	}

	return 0;
}
