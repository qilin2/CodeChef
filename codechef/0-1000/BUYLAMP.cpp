#include <iostream>
using namespace std;

int main() {
	int t;
	int n, k, x, y;
	cin >> t;
	while(t--)
	{
	    cin >> n >> k >> x >> y;
	    int red = k * x;
	    cout << ((n - k == 0) ? red : (((n-k)*x <= (n-k)*y) ? red + (n-k) * x : red + (n-k) * y )) << endl;
 	}
	return 0;
}
