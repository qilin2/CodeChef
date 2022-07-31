#include <iostream>
using namespace std;


// Leetcode Submission
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i = 1; i < nums.size() ; i++)
        {
            nums[i] += nums[i - 1];
        }
        
        return nums;
    }
};


// SCRATCH
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int runningSum[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for(int i = 0; i < n; i++)
    {
        cout << "inserting element " << i + 1 << " in runningSum array" << endl;
        runningSum[i] = 0;
        for(int j = i; j >= 0; j--)
        {
            cout << "current element: " << arr[j] << endl; 
            cout << "current element in runningSum" << runningSum[i] << endl;
            runningSum[i] += arr[j];
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        cout << runningSum[i] << " ";   
        
    }
    return 0;
}
