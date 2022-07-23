// Program: Zero Ones == One Zeroes
// About  : Checks the Subsequences of 01 & 10 are equal
// Name   : Brandon Qilin Hung
// Date   : 07-23-2022

// Libraries
#include <iostream>
using namespace std;

// Main
int main() {
    // Variables
	int t, n;
	cin >> t;
	while(t--)
	{
	    cin >> n;
	    cout << "0";

        // Subsequences
        // Prints the trailing numbers in between the start and end of the string
	    for(int i = 0; i < n - 2 ; i++) 
	    {
	        cout << "1";
	    }
	    cout << "0" << endl;
	}
	return 0;
}
