

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int x, y;
	    cin >> x >> y;
	    int arr[x];
	    for(int i = 0; i < x; i++)
	    {
	        cin >> arr[i];
	    }
	    for(int j = 0; j < x; j++)
	    {
	        if(arr[j] <= y)
	        {
	            cout << 1;
	            y = y - arr[j];
	        }
	        else
	        {
	            cout << 0;
	        }
	    }
	    cout << endl;
	}
	return 0;
}
