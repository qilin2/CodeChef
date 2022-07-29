#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n, c = 0;
	    cin >> n;
	    int arr[n];
	    for(int i = 0; i < n; i++)              cin >> arr[i];
	    for(int i = 0; i < n; i++)
	    {
	        if(n < 7)                           break;
	        if(arr[i] >= 1 && arr[i] <= 7)      c++;
	        if(c == 7 && i != n - 1)
	        {
	            c = i + 1;
	            break;
	        }
	        if( c == 7 && i == n -1)            c = i + 1;
	    }
	    cout << c << endl;
	    
	}
	return 0;
}
