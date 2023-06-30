//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&nums, int n)
    {   
        int sum = 0, ans = 0;
        vector<int>prefixSum;
        unordered_map<int, int>m;
        m[0]=0;
        
        for(int i=0; i < n; i++){
            sum += nums[i];
            if(sum == 0) ans = max(ans, i+1);
            prefixSum.push_back(sum);
            if(m.count(sum) > 0){
                ans = max(ans, i-m[sum]);
            }else{
               m[sum] = i; 
            }
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends