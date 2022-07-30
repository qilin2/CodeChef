#include <iostream>
using namespace std;


int main()
{
    int n, c = 0;
    int a[3];
    cin >> n;
    while(n--)
    {
        for(int i = 0; i < 3; i ++)
        {
            cin >> a[i];
        }
        if((a[0] == 1 && a[1] == 1) || (a[1] == 1 && a[2] == 1) || (a[0] == 1 && a[2] == 1))
        {
            c++;
        }
    }
    cout << c << endl;
}