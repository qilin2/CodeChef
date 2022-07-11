// Program: BURGER
// Name   : Brandon Qilin Hung
// Date   : 07-10-2022

#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int test_cases;
    int patty, bun;
    
    cin >> test_cases;
    int burger[test_cases];
    
    for(int i = 0; i < test_cases; i++)
    {
        cin >> patty >> bun;
        burger[i] = min(patty,bun);
    }
    
    for(int i = 0; i < test_cases; i++)
    {
        cout << burger[i] << endl;
    }
}