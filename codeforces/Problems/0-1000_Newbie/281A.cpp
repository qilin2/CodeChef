#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    s[0] = ((s[0] <= 'z' && s[0] >= 'a') ? s[0] - 32 : s[0]);
    cout << s << endl;

    return 0;
}