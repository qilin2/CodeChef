// Program: WORDLE
// About  : Given the hidden word SS and guess TT, determine string MM.
// Name   : Brandon Qilin Hung
// Date   : 07-12-2022  

#include <iostream>
using namespace std;

int main() {
	int test_cases;
	
	cin >> test_cases;
	while(test_cases--)
	{
	    int i = 0;
	    string s,t,m = "";
	    cin >> s;
	    cin >> t;
	    while(i < 5)
	    {
	        if(s[i] == t[i])    m = m + "G";
	        if(s[i] != t[i])    m = m + "B";

	        i++;
	    }
	cout << m << endl;
	}

	return 0;
}
