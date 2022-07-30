#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Variables
    int n, k;
    string s;
    cin >> n >> k; // N for s.length() || k for letters available
    cin.ignore(); // clear input buffer
    getline(cin, s); // s for string 
    long long a[n];
    bool typeable[26] = {0}; // boolean array

    // Loops
    for(long long i = 0; i < k; i++)
    {
        char c;
        cin >> c;
        typeable[c - 'a'] = 1;
    }
    
    for(long long i = 0; i < n; i++)
    {
        if(typeable[s[i] - 'a'])
        {
            a[i]  = 1;
        }
        else
        {
            a[i] = 0;
        }
    }

    // DP
    long long f[n + 1];
    long long ans = 0;
    f[0] = 0;
    for(long long i = 0; i < n; i++)
    {
        if(a[i] == 0)
        {
            f[i + 1] = 0;
        }
        else
        {
            f[i + 1] = f[i] + 1;
        }
        ans += f[i + 1];
    }

    cout << ans << endl;
    
    return 0;
}