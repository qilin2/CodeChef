#include <iostream>
#include <algorithm>
using namespace std;

bool copyPush(string x)
{
    if(x.length() == 0 || x.length() == 1)
    {
        return true;
    }
    
    if(x.length() % 2 == 1)
    {
        return copyPush(x.substr(0, x.length()- 1));
    }
    if(x.substr(0, x.length() / 2) == x.substr(x.length() / 2, x.length()))
    {
        return copyPush(x.substr(0, x.length() / 2));
    }
    return false;
        
}


int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n = 0;
	    string x;
	    cin >> n >> x;
	    cout << (copyPush(x) ? "YES" : "NO") << endl;
	}
	return 0;
}
