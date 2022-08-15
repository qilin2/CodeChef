#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int arr[n];
    
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if(n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    
    int c = 1, maxc = INT_MIN;
    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] <= arr[i + 1])    c++;
        else                        c = 1;
        
        if(c > maxc)                maxc = c;
    }
    
    cout << maxc << endl;
    return 0;
}