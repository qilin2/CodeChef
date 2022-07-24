#include <iostream>
using namespace std;

int main() {
	int t;
	int n, x;
	cin >> t;
	while(t--)
	{
	    cin >> n >> x;
	    if(n % 2 == 0)
	    {
	       cout << "YES" << endl;
	    }
	    else
	    {
	        if(x % 2 != 0)
	        {
	            cout << "YES" << endl;
	        }
	        else
	        {
	            cout << "NO" << endl;
	        }
	    }
	}
	return 0;
}
