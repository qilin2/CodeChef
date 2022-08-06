#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int u = 0, l = 0;
    cin >> s;
    for(int i = 0; i < s.length() ; i++)
    {
        if(int(s[i]) >= 65 && int(s[i]) <= 90)  u++;
        if(int(s[i]) >= 97 && int(s[i]) <= 122) l++;
    }
    if( u > l)
    {
        for(int i = 0; i < s.length(); i++)
        {
            if(int(s[i]) > 90)     s[i] = s[i] - 32;  
            // cout << s[i] << endl;
        }
    }
    else
    {
        for(int i = 0; i < s.length(); i++)
        {
            if(int(s[i]) <= 90 )    s[i] = s[i] + 32;
        }
    }
    // cout << u << " " << l << endl;
    cout << s << endl;
    return 0;
}   