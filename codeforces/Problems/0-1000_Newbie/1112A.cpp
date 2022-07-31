#include <iostream>
#include <string>
using namespace std;

int main() {
    int c;
    string s1, s2;
    cin >> s1;
    cin >> s2;
    
    for(int i = 0; i < s1.size(); i++)
    {
        if(int(s1[i]) >= 65 && int(s1[i]) <= 90)      s1[i] = s1[i] + 32;
        if(int(s2[i]) >= 65 && int(s2[i]) <= 90)      s2[i] = s2[i] + 32;
        
        if(s1[i] < s2[i])
        {
            c = -1;
            break;

        }
        else if(s1[i] > s2[i])
        {
            c = 1;
            break;

        }
        else
        {
            c = 0;
        }
    }
    cout << c << endl;
    // cout << s1 << endl;
    // cout << s2 << endl;

    return 0;
}