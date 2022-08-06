#include <iostream>
using namespace std;
int main() {
    string s;
    bool c = 0;
    cin >> s;
    for(int i = 0; i < s.length(); i++)
   {
        if(((s[i] == 43 && s[i] == 'x') || int(s[i]) == 81) || (int(s[i]) == 57 || int(s[i]) == 72))
        {
            c = 1;
            break;
        }
    }
    cout << ((c) ? "YES" : "NO" ) << endl;
    
    return 0;
}