#include <iostream>
using namespace std;
int main() {
    int t;
    int x, y;
    
    
    cin >> t;
    
    while(t--)
    {
        cin >> x >> y;
        
        cout << (( x >= y) ? "YES" : "NO" ) << endl;
        
    }

    return 0;
}