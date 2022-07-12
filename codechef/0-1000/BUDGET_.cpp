#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test_cases;
	int x, y;
	
	cin >> test_cases;
	while(test_cases--)
	{
	    cin >> x >> y;
	    cout << ((x >= 30 * y) ? "YES\n" : "NO\n") << endl;
	}
	
	return 0;
}
