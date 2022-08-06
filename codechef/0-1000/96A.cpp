// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int c = 0;
    cin >> s;
    for(int i = 1; i < s.length() ; i++)
    {
        // cout << c << endl;
        if(c >=6)               break;
        if(s[i] == s[i-1])      c++;
        else                    c =0;
    }
    
    cout << ((c >= 6) ? "YES" : "NO") << endl;

    return 0;
}