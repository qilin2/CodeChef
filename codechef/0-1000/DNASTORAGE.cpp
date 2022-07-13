#include <iostream>
using namespace std;

int main() {
    int t;
    
    cin >> t;
    while(t--)
    {
        int x;
        string s, b = "";
        int i = 0;
        cin >> x;
        cin >> s;
        while(i < x)
        {
            if(s[i] == '0' && s[i+1] == '0')    b = b + "A";
            if(s[i] == '0' && s[i+1] == '1')    b = b + "T";
            if(s[i] == '1' && s[i+1] == '0')    b = b + "C";
            if(s[i] == '1' && s[i+1] == '1')    b = b + "G";
            
            i+=2;
        }
        cout << b << endl;
        
    }
	return 0;
}
