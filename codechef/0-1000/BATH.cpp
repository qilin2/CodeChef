#include <iostream>
using namespace std;

int main() {
	int test_cases, x,y;
	cin >> test_cases;
	
	while(test_cases--)
	{
	    cin >> x >> y;
	    cout << ((y*2 <= x) ? x / (y*2) : 0) << endl; 
	}
	return 0;
}
