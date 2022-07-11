#include <iostream>
using namespace std;

int main() {
	// Code 
	
	int test_cases, B, A;
	cin >> test_cases;
	char output[test_cases];
	
	for(int i = 0; i < test_cases; i++)
	{
	    cin >> A >> B;
	    
	    if (B > A)
	    {
	        output[i] = 'B';
	        
	    }
	    else
	    {
	        output[i] = 'A';
	    }
	}
	
	for(int i = 0; i < test_cases; i ++)
	{
	    cout << output[i] << endl;
	}
	
	
	return 0;
}
