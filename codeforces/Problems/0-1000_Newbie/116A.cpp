#include <iostream>
using namespace std;

int main()
{
    int t;
    int temp = 0, c = 0, o = 0;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        temp = c;
        c-=a;
        c+=b;
        // cout << temp << " ||" << c << endl;
        // cout << "--------------------" << endl;
        if(temp < c && o < c)                        o = c;
        else if(temp > c && o < temp)                o = temp;
    }
    // cout << "-------" << endl;
    cout << o << endl;
    return 0;
}