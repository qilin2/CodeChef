#include <iostream>
using namespace std;


int main()
{
    int test_cases;
    int seconds;
    int steps;
    cin >> test_cases;  
    while(test_cases--)
    {
        cin >> seconds;
        int steps = 0;
        for(int i = 0;   i < seconds; i++)
        {
            steps = ((i % 2 == 0) ? steps+=3 : steps-=1);
        }
        cout << steps << endl;
    }
}