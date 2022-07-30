#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, c = 0;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for(int i = 1; i < n; i ++)
        {
            if(arr[i+1] != arr[i])
            {
                c++;
                continue;
            }
        }
        cout << c << endl;   
    }
    return 0;
}