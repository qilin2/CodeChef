#include <iostream>
using namespace std;

int main()
{
    int x, y = 0;
    int c = 0;
    cin >> x;
    while (y < x)
    {
        x-=5;
        c++;
    }
    cout << c << endl;
    return 0;
}