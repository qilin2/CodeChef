#include <iostream>
#include <cmath>
using namespace std;


int main ()
{
    int test_cases;
    int a_1, a_2, b_1, b_2;
    
    cin >> test_cases;
    
    
    while(test_cases--)
    {
        cin >> a_1 >> b_1 >> a_2 >> b_2;
        int product_a = (pow(a_1,2) * pow(b_2, 3));
        int product_b = (pow(b_1, 2) * pow(a_2,3));
        bool product_equals = (product_a == product_b);
        
        cout << (product_equals ? "YES\n" : "NO\n");
        
    }

    return 0;
  
}