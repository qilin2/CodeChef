#include <iostream>
using namespace std;

int main() {
	int test_cases;
	int x;
	
	cin >> test_cases;
	
	while(test_cases--)
	{
	    cin >> x;
	    if(x % 4 == 0 && x <=4)
	    {
	        cout << 1 << endl;
	    }
	    else if(x % 4 == 0 && x > 4)
	    {
	        cout << x/4 << endl;
	    }
	    else
	    {
	        cout << (x/4) + 1 << endl;
	    }
	}
	return 0;
}
