// Program: MATH ENROLLMENT
// About  : Checks how many extra seats is needed
// Name   : Brandon Qilin Hung
// Date   : 07-11-2022


#include <iostream>
using namespace std;

int main()
{
    int test_cases;
    int x, y;
    cin >> test_cases;
    
    while(test_cases--)
    {
        cin >> x >> y;
        cout << ((x < y) ? y - x : 0) << endl;
    }
}