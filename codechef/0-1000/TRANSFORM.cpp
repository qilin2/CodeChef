// Program : TRANSFORM
// About   : Changes Mario Size based on the inputted integer
// Name    : Brandon Q Hung
// Date    : 07-12-2022
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test_cases, x;
	cin >> test_cases;
	while(test_cases--)
	{
	    cin >> x;
	    int n = x / 3;
	    if ( x == 0 || x == 3*n)
	    {
	        cout << "NORMAL" << endl;
	    }
	    else if( x == 1 || x == 1 + 3*n)
	    {
	        cout << "HUGE" << endl;
	    }
	    //else if( x == 2 || x == 2 + 3 *n)
	    //{
	        //cout << "SMALL" << endl;
	    //}
	    else
	    {
	        //cout << endl;
	        cout << "SMALL" << endl;
	    }

	}
	return 0;
}
