#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i = 0; i < n; i++)
	    {
	        cin >> arr[i];
	    }
	    sort(arr, arr + n);
	    bool flag = true;
	    for(int i = 0; i + 1 < n; i++)
	    {
	        flag &= (arr[i + 1] - arr[i] <= 1);
	    }
	    cout << ((flag) ? "YES" : "NO") << endl;	
	    
	}
	return 0;
}
