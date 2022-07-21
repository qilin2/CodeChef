#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define long long int 

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    map<int,int> m;
	    for(int i=0;i<n;i++)
	    {
	        m[arr[i]]++;
	    }
	    for(auto x:m)
	    {
	        int key=x.first;
	        int value=x.second;
	        if(value%2==1)
	          cout<<key<<endl;
	    }
	    
	}
	return 0;
}
