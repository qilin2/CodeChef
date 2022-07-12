#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test_cases;
	int x;
	cin >> test_cases;
	
	while(test_cases--)
	{
	    cin >> x;
	    cout << (( 30 < x ) ? "YES\n" : "NO\n");
	}
	
	
	return 0;
}
