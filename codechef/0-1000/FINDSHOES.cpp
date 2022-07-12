// Program: FINDSHOES
// About  : Find the minium number of shoes required for N person.
// Name   : Brandon Q Hung
// Date   : 07-11-2022

#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int t;
    int N,a;
	cin >> t;
	while(t--)
    {
	    cin >> N >> a;
	    if(N > a)
        {
	        cout<< N + abs(N-a)<< endl;
	    }
	    else 
        {
	        cout << N <<endl;
	    }
	}
	return 0;
}
