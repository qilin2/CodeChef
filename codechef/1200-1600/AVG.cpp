#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin >> t;
    while(t--) {
        int n, k, v;
        int sum = 0;
        cin >> n >> k >> v;

        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            sum+=a[i];
        }    
        long int ans = (v*(n + k)) - sum;
        if(ans <= 0) cout << "-1" << endl;
        else if(ans%k == 0) cout << ans/k << endl;
        else cout << "-1" << endl;
    }
	return 0;
}
