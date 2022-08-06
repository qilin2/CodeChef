#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int c = 0;
    cin >> s;
    sort(s.begin(), s.end());
    // cout << s << endl;
    for(int i = 1; i < s.length(); i++)
    {
        if(s[i] != s[i-1])      c++;
    }
    // cout << c << endl;
    cout << ((c % 2 == 0) ? "IGNORE HIM!" : "CHAT WITH HER!") << endl;

}