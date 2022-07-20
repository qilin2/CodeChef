#include <iostream>
using namespace std;

int main()
{
    int t;
    int x,y;
    cin >> t;
    while(t--)
    {
        int c =0;
        int a = 0;
        int b = 0;
        cin >> x >> y;
        while((a <= x && b <=y) || (b <= y && a <=x))
        {
            c++;
            (c % 2 == 0) ? b = b + c : a = a + c;
            //cout << "a: " << a << "| b: " << b << endl;
        }
        if(b > y)   cout << "Limak" << endl;
        if(a > x)   cout << "Bob" << endl;
    }
}CA