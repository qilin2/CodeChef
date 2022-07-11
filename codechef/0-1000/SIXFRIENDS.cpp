#include <iostream>
using namespace std;

int main() 
{
    int test_cases;
    int x, y;
    cin >> test_cases;
    
    while(test_cases--)
    {
        cin >> x >> y;
        
        cout << ((x*3 > y*2) ? y*2: x*3) << endl;
    }
    
	
	return 0;
}
