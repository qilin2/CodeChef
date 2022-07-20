#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>> s;
	    if(n<4)
	    cout<<"YES"<<endl;
	    else
	    {
	        int count=0;
	        int flag=0;
	        for(int i=0;i<n;i++)
	        {
	         if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
	        {
	            count=0;
	        }
	        else
	        count++;
	        
	        if(count==4)
	        {
	            flag=1;
	            break;
	        }

	        }
	        if(flag==0)
	       cout<<"YES"<<endl; 
	       else
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
	
}
