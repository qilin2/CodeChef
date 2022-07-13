#include <iostream>
using namespace std;

int main() {
	int test_cases;
	int n, x, y;
	
	cin >> test_cases;
	while(test_cases--)
	{
	    cin >> n >> x >> y;
	    cout << ((n >= x + (y*2)) ? "YES" : "NO") << endl;
	}
	return 0;
}
