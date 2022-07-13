// Program :  PLAYPIAN
// About   : Checks if the piano is played in AB or BA order.
// Name    : Brandon Qilin Hung
// Date    : 07-12-2022

#include <iostream>
#include <string>
using namespace std;

int main() {
	int test_cases;
	
	cin >> test_cases;
	while(test_cases--)
	{
	    string s = "";
	    int x = 0;
	    int i = 0;
	    cin >> s;
	    while (i < s.length())
	    {
	        if((s[i] == 'A' && s[i+1] == 'B') || (s[i] == 'B' && s[i+1] == 'A'))    x =1;
	        else
	        {
	            x = 0;
	            break;
	        }
	        i+=2;
	    }
	    cout << ((x == 1) ? "yes" : "no") << endl;
	}
	return 0;
}
