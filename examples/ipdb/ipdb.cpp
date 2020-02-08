/*
 * Justin Greever
 * CS162
 * 2/7/2020
 *
 * IP Database (ipdb)
 * This program will help me  keep track of
 * what device has what IP address on my local
 * network at home. It will associate the following:
 * - MAC Address
 * - Hostname
 * - IP Address
 */

/* Includes */
#include <iostream>
#include <fstream>
#include <cctype>
#include <cstring>
using namespace std;

/* Global Constants */
const int MACADDR = 13;
const int HOSTNAME = 51;

/* Structures */
struct ipdb
{
  char macaddr[MACADDR];
  int ipaddr;
  char hostname[HOSTNAME];
};

/* Prototypes */
void getInfo(ipdb infoToGet);

/* main() */
int main()
{
  ipdb getMacInfo[MACADDR];
  getInfo(getMacInfo[0]);
  return 0;
}
/* Functions */
void getInfo(char macaddr[], int ipaddr, char hostname[])
{
  cout << "Please type in the MAC address (letters/numbers only):" << endl;
  cin.get(macaddr, MACADDR, '\n');
  cin.ignore(100,'\n');
  cout << "Please type in the IP address:" << endl;
  cin >> ipaddr;
  cin.ignore(100, '\n');
  cout << "Please type in the Hostname:" << endl;
  cin.get(hostname, HOSTNAME, '\n');
  cin.ignore(100, '\n');
}
