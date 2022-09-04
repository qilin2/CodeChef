#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
	cin>>n;
	int c1=0, c2=0, c3=0, c4=0, cn=0;
	vector<int>v;
	for(int i=0; i<n; i++)
    {
		int s;
		cin>>s;
		cn+=s;
		if(s==4)    c4++;
		if(s==3)    c3++;
		if(s==2)    c2++;
		if(s==1)	c1++;
	}
	c4+=c3;
	c1-=c3;
	c4+=c2/2;
	c2=c2%2;
	if(c2==1){
		c1-=2;
		c2=0;
		c4++;
	}
	if(c1>0)        c4+=((c1+3)/4);
	cout << c4;
    
    return 0;
}