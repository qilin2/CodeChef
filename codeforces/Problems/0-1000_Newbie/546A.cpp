#include <iostream>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int c = 0;
    for(int i = 1; i <= w ; i++)
    {
        c += k * i;

    }
    cout << ((c - n <= 0 ) ? 0 : c - n) << endl;
}