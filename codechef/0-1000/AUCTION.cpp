#include <iostream>
using namespace std;

int main() {
	int t;
	int a, b, c;
	cin >> t;
	while(t--)
	{
	    cin >> a >> b >> c;
	    if(c > a && c > b)
	    {
	        cout << "Charlie" ;
	    }
	    else if(b > a && b > c)
	    {
	        cout << "Bob";
	    }
	    else
	    {
	        cout << "Alice";
	    }
	    cout << endl;
	}
	return 0;
}
