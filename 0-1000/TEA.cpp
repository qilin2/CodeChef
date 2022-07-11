// Program : Chef Drinks Tea
// About   : Minimum amount of money he has to pay for drinking exactly XX liters of tea daily.
// Name    : Brandon Qilin Hung
// Date    : 07-10-2022


#include <iostream>
using namespace std;

int main()
{
    int test_cases;
    int x,y,z;
    
    cin >> test_cases;
    
    while(test_cases--)
    {
        cin >> x >> y >> z;
        if(x > y)
        {
            cout << ((x % y == 0) ? ((x/y)*z) : ((x/y) + 1) * z ) << endl;
        }
        else
        {
            cout << z << endl;
        }
    }
    
    return 0;
}