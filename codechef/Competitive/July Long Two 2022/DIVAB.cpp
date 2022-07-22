#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, n, x;
        cin >> a >> b >> n;
        if(a % b == 0)
        {
            cout << -1 << endl;
            continue;
        }
        x = n;
        if(x % a != 0)
        {
            x = n + a  - (x%a);
        }
        while(!(x%a == 0 && x%b != 0))
        {
            x += a;
        }
        cout << x << endl;
    }
    return 0;
}