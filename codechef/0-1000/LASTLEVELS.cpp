#include <iostream>
using namespace std;

int main() {
	int t;
	int x, y, z;
	cin >> t;
	while (t--)
	{
	    cin >> x >> y >> z;
	    if( x <= 3)
	    {
	        cout << x * y << endl;
	    }
	    else
	    {
	        cout << ((x % 3 == 0) ? ((x*y) + ((x/3)-1) * z) : ((x*y) + ((x/3)) * z)); 
	        cout << endl;

	    }
	}
	return 0;
}
