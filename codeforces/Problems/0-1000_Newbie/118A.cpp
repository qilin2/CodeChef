#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
int main()
{
    string s, v = "aeiouy";
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    // char vowels[] = {'a' ,'e' ,'i', 'o' ,'u'};
    for(int i = 0; i < s.length(); i++)
    {
        // cout << "current letter: " <<  s[i] << endl;
        for(int j = 0; j < v.length(); j++)
        {
            if(s[i] == v[j])
            {
                s.erase(remove(s.begin(), s.end(), v[j]), s.end());
                // cout << v[j] << endl;
                i-=1;
            }
        }
    }
    for(int i = 0; i < s.length(); i++)
    {
        cout << "." << s[i];
    }
    return 0;
}