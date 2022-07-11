#include <iostream>
using namespace std;

int main()
{ 
    int test_cases, a, b = 0;
    cout << "Enter the number of test cases: ";
    cin >> test_cases;
    int output[test_cases];
    for(int i = 0; i < test_cases; i ++)
    {
        cout << "Enter Two Integers: ";
        cin >> a >> b;
        output[i] = a + b;
    }

    cout << "----SUMS----" << endl;
    for(int i = 0; i < (sizeof(output))/(sizeof(int)); i++)
    {
        cout << output[i] << endl;
    }

    return 0;
}
