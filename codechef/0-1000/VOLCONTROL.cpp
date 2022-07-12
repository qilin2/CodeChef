#include <iostream>
using namespace std;

int main() {
	int test_cases;
	int x, y;
	
	cin >> test_cases;
	while(test_cases--)
	{
	    cin >> x >> y;
	    
	    cout << ((x >= y) ? x-y : y-x) << endl;
	}
	return 0;
}
