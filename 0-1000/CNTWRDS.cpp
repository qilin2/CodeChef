// Program: Prints out the total number of pages
// Name   : Brandon Qilin Hung
// Date   : 07-10-2022


#include <iostream>
using namespace std;

int main()
{
    int test_cases;
    int n,m;
    
    cin >> test_cases;
    int book_totalWords[test_cases];
    
    for(int i = 0; i < test_cases; i++)
    {
        cin >> n >> m;
        book_totalWords[i] = (n * m);
    }
    
    for(int i = 0; i < test_cases; i++)
    {
        cout << book_totalWords[i] << endl;
    }
    return 0;
}