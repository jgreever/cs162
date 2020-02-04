/* 
 * Justin Greever
 * CS162
 * 2/3/2020
 *
 * This will serve as a starting point for many little example
 * scripts that I will be writing to practice for the CS162
 * midterm on 2/4/2020.
 *
 * Old code will be commented out and new code added under the old.
 */

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
  int userInput = 0;
  int userSum = 0;
  int userNum = 0;
  
  cout << "How many numbers do you want to enter: ";
  cin >> userNum;
  cout << "Enter " << userNum <<" numbers: ";  
  cin >> userInput;
  cin.ignore(100,'\n');

  for(int i = 1; i < userNum; i++)
  {
    userSum += userInput;
    cin >> userInput;
    cin.ignore(100,'\n');
  }

  cout << "The sum of the numbers entered is: ";
  cout << userSum << endl;

  return 0;
}
