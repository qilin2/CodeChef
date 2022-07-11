// Program: Kilometers Walked in 5 Days
// Name   : Brandon Qilin Hung
// Date   : 07-10-2022

#include <iostream>
using namespace std;

int main()
{
    int test_cases, kilometers;
    cin >> test_cases;
    int totalWalk[test_cases];
    
    for(int i = 0; i < test_cases; i++)
    {
        cin >> kilometers;
        totalWalk[i] = (kilometers * 2 * 5);
    }
    
    for(int i = 0; i < test_cases; i ++)
    {
        cout << totalWalk[i] << endl;
    }
}