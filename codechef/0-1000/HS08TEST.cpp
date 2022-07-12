// Program: ATM Transaction
// About  : Checks if there is enough money to transfer out of the account balance
// Name   : Brandon Qilin Hung
// Date   : 07-11-2022


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    float b;
    cin>>a>>b;
    if (a%5==0 && a<=(b-0.50)){
        cout<<(b-a-0.50)<<endl;
    }
    else{
        cout<<b<<endl;
    }
    return 0;
}
