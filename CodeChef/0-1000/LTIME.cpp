// Program : LUNCHTIME
// About   : Checks if its Lunchtime 
// Name    : Brandon Qilin Hung
// Date    : 07-10-2022


#include <iostream>
using namespace std;

int main()
{
    int test_cases, lunchTime;
    cin >> test_cases;
    
    while (test_cases--)
    {
        cin >> lunchTime;
        cout << (( 1 <= lunchTime && lunchTime <= 4) ? "YES\n" : "NO\n");
    }
}