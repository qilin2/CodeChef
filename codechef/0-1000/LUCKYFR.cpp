// Program: Lucky Four
// About  : Counts the number of occurences of the digit 4
// Name   : Brandon Qilin Hung
// Date   : 07-11-2022


#include <iostream>
using namespace std;

int main()
{
    int test_cases,x ;
    int counter = 0;
    
    cin >> test_cases;
    
    while(test_cases--)
    {
        cin >> x;
        counter = 0;
        while( x != 0)
        {
            if( x % 10 == 4)
            {
                counter++;
            }
            x /= 10;
        }
        
        cout << counter << endl; //Number of Occurences of Digit 4
    }
}