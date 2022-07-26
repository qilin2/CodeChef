#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int a, b, c, d, e;
	while(t--)
	{
	    cin >> a >> b >> c >> d >> e;
	    if((a+b <= d && c <= e) || (a+c <= d && b <= e) || (b+c<=d && a <=e))
	    {
	        cout << "YES" << endl;
	    }
	    else
	    {
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
