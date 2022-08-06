#include<bits/stdc++.h>
using namespace std;

int main() 
{
	long long n;
	int a=0;
	cin>>n;
	while(n!=0)
	{
		if(n%10==7||n%10==4)
		a++;
		n=n/10;
	}
	if(a==7||a==4)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}