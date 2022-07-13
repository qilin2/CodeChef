// Program : DOLL
// About   : Counts the number of people that needs to be killed 
//           in order to kill a person visible to another person with the same inputted height
// Name    : Brandon Qilin HUng
// Date    : 07-12-2022

#include <iostream>
using namespace std;


int main()
{
    int t;
    int n, k;
    
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int arr[n];
        int counter = 0;
        for(int i = 0; i < n; i ++)
        {
            cin >> arr[i];
            //cout << arr[i] << endl;
        }
        for(int j = 0; j < n ; j++)
        {
            if(arr[j] > k)
            {
                counter++;
            }
        }
        cout << counter << endl;
        
    }
    return 0;
}