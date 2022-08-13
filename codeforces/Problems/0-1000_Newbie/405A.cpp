#include <iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int difference = (arr[j] - arr[j+1]);
                if(arr[j] >= 0 && arr[j+1] >= 0)
                {
                    arr[j+1] = arr[j+1] + difference;
                    arr[j] = arr[j] - difference;
                }
            }
            // for(int i = 0; i < n; i++)
            // {
            //     cout << arr[i] << " ";
            // }
            // cout << endl;
        }
    }
    // cout << "final output" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}