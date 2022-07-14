// Program: Age Limit
// About: Checks if the age is greater or equal to x and less than y.
// Name : Brandon Qilin Hung
// Date : 07-10-2022


#include <iostream>
#include <string>
using namespace std;

int main()
{
    int test_cases;
    int x,y,a;
    
    cin >> test_cases;
    int ageLimit[test_cases];
    
    for(int i = 0; i < test_cases; i++)
    {
        // Approach #1:
        cin >> x >> y >> a;
        ageLimit[i] = ((x <= a && a < y) ? 1 : 0 );

        // Approach #2:
        cout << ((x <= a && a < y) ? "YES\n" : "NO\n");
    }    

    // Approach #1:
    for(int i = 0; i < test_cases; i ++)
    {
        if(ageLimit[i] == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
    
}
