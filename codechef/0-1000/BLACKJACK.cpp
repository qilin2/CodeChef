#include <iostream>
using namespace std;

int main() {
	int test_cases;
	int x,y;
	
	cin >> test_cases;
	while(test_cases--)
	{
	    cin >> x >> y;
	    cout << ((21 - (x+y) <= 10) ? 21 - (x + y) : -1) << endl;
	}
	return 0;
}
