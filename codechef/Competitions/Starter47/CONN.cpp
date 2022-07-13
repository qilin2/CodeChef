#include <iostream>
using namespace std;

bool construct(long long n)
{
    long long k = n /7;
    if((k % 2 == 0 && n % 2 == 0) || (k%2 != 0 && n%2 != 0))
    {
        return true;
    }
    for(int i = 1; i < k; i++)
    {
        int s = n - ( 7 * i);
        if(s % 2 == 0)
        {
            return true;
        }
        return false;
    }
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t > 0)
	{
	    long long n;
	    cin >> n;
	    if(n % 2 == 0 || n % 7 == 0 || n % 9 == 0)
	    {
	        cout << "YES" << endl;
	    }
	    else if (n < 7)
	    {
	        cout << "NO" << endl;
	    }
	    else
	    {
	        if(construct(n))
	        {
	            cout << "YES" << endl;
	        }
	        else
	        {
	            cout << "NO" << endl;
	        }
	    }
	    t--;
	}
	return 0;
}
