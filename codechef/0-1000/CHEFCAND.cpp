#include <iostream>
using namespace std;

int main() {
	int test_cases, x, y;
	int counter;
	cin >> test_cases;
	
	while(test_cases--)
	{
	    cin >> x >> y;
	    counter = 0;
	    if ( x >= y)
	    {
	        if ( x % 4 == 0)
	        {
	            cout << (x/4) - (y/4) << endl;
	        }
	        else if ( x == y)
	        {
	            cout << 0 << endl;
	        }
	        else
	        {
	            while( x > y)
	            {
	                y+=4;
	                counter += 1;
	            }
	            cout << counter << endl;
	        }
	    }
	    else
	    {
	        cout << 0 << endl;
	    }

	}
	return 0;
}
