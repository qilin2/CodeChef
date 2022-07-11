#include <iostream>
using namespace std;

int main()
{
    const int TEST_CASES = 10;
    int trials, points, n;
    
    cin >> trials;
    while(trials--)
    {
        cin >> points >> n;
        cout << (points/TEST_CASES) * n << endl;
        
    }
    
    return 0;
}