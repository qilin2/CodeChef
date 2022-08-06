#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, m, x = 0;
    cin >> n >> m;
    int l = n, b = m;
    while(m >= n)
    {
        n = l * (pow(3,x));
        m = b * (pow(2,x));
        // cout << x << " " << n << " " << m << endl;
        x++;
    }
    cout << x - 1 <<endl;
    
    
    return 0;
}