#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--)
	{
	    int n,k, sum = 0;
	    cin >> n >> k;
	    vector<int> one,two;
	    
	    for(int i = 0; i < n; i++)
	    {
	        int elem; cin>>elem;
            sum+=elem;
	        if (i%2==0)
	            one.push_back(elem);
	        else
	            two.push_back(elem);
	    }
	    
	    sort(one.begin(),one.end(),greater<int>());
	    sort(two.begin(),two.end(),greater<int>());
	    
	    int moves = n/2;
	    int i = 0,j=0,sum2=0;
	    
	    while(k && moves > 0)
	    {
	        if(one[i] > two[j])
	        {
	            sum2 += one[i];
	            i++; k++;
	        }
	        else
	        {
	            sum2+=two[j];
	            j++;
	        }
	        moves-=1;
	    }
	    
	    while(moves > 0)
	    {
	        sum2+=two[j++];
	        moves-=1;
	    }
	    
	    if(sum2 > sum-sum2)
	        cout << "YES\n";
	    
	    else
	        cout << "NO\n";
	}
	return 0;
}
