#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    string str, s;
	    cin >> str;
	    
	    for(int i = 0; i < n; i++)
		{
			if(str[i] != '.')
			{
				s.push_back(str[i]);
			}
		}
// 		cout<<s<<endl;
		int flag = 1;
		for(int i = 0; i < s.size(); i++)
		{
			if(i % 2 == 0)
			{
				if(s[i] != 'H') flag = 0;
			}
			if(i % 2 == 1)
			{
				if(s[i] != 'T') flag = 0;
			}
		}
		if(s.size() % 2 != 0) flag = 0;
		if(flag == 1)   cout << "Valid"   << endl;
		else            cout << "Invalid" << endl;
	}
	return 0;
}
