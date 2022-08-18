#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    for(int i =  0; i < s.length() - 2; i++)
    {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        {
            s.erase(i,3);
            while(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
            {
                s.erase(i,3);
            }
            s.insert(i, " ");
        }
    }
    
    cout << s << endl;
    
    return 0;
    
}