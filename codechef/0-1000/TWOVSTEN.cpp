// Program: TWOVSTEN
// About  : Checks if the number is divisible by 10
// Name   : Brandon Qilin Hung
// Date   : 07-11-2022

#include <iostream>
using namespace std;

int main() 
{
    int test_cases, x;
    int counter;
    
    cin >> test_cases;
    while(test_cases--)
    {
        counter = 0;
        cin >> x;
        while( x % 10 != 0)
        {
            x*=2;
            counter+=1;
            
            if(x < 10)
            {
                counter = -1;
                break;
            }
        }
        
        cout << counter << endl;
    }
	return 0;
}
