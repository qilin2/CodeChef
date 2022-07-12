// Program: JENGA
// About  : Output the validity of the game based on the number of pieces 
//          and number of players.
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
        if(x == y)
        {
            cout << "YES" << endl;
        }
        else if(x > y)
        {
            cout << "NO" << endl;
        }
        else
        {
            if(y % x != 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
}