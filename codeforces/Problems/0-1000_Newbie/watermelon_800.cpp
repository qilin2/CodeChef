#include <iostream>
using namespace std;

int main()
{
    int w;
    cin >>w;
    cout << ((w % 2 == 0 && (w != 2 && w != 0)) ? "YES" : "NO") << endl;
}