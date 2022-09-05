#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    long long m = 0;
    cin >> n >> l;
    vector <long long> v(n, 0);
    for(int i = 0; i  < n; i++)       cin >> v[i];
    sort(v.begin(), v.end());
    for(int i = 0; i < n - 1; i++)    m = max(m, v[i+1] - v[i]);
    // Compares & Finds the max from the start to first position, neighbor positions, and last position to the end.
    long double maxdist = max((double)max(v[0], l - v[n-1]), m / 2.0); 
    cout << setprecision(9) << maxdist << "\n"; // maximum dist
    
    return 0;
}