// Program: SUGARCANE
// About  : Prints the Profit of the Sugarcane
// Name   : Brandon Qilin Hung
// Date   : 07-11-2022

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    int test_cases, glasses, total;
    cin >> test_cases;
    
    while(test_cases--)
    {
        cin >> glasses;
        total = glasses * 50;
        cout << fixed << setprecision(0);
        cout << total - ((total * .2) + (total * .2) + (total * .3)) << endl;
    }
    
}