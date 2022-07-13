// Program: POLTHIEF
// About  : Minimum time for the Police to catch the Thief
// Name   : Brandon Qilin Hung
// Date   : 07-12-2022

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int x, y;
    cin>>x>>y;
    if (x==y)
        cout<<0<<endl;
    else
        cout<<abs(x-y)<<"\n";
    
    }   
    return 0;
}