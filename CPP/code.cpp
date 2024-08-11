//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
private:
    vector<vector<int>> memo;

public:
    bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
        memo.assign(n + 1, vector<int>(k + 1, -1)); // Initialize memoization table with -1
        return checkSubsequenceSumHelper(n, arr, k);
    }

    bool checkSubsequenceSumHelper(int n, vector<int>& arr, int k) {
        if (n == 0) {
            if (k == 0) return true;
            return false;
        }

        if (memo[n][k] != -1) // If already computed, return the result
            return memo[n][k];

        // Compute recursively and store the result in the memoization table
        return memo[n][k] = checkSubsequenceSumHelper(n - 1, arr, k - arr[n - 1]) || 
                            checkSubsequenceSumHelper(n - 1, arr, k);
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> arr;
        
        for(int i=0; i<n; ++i){
            int x; cin>>x;
            arr.push_back(x);
        }
        
        Solution obj;
        bool ans = obj.checkSubsequenceSum(n, arr, k);
        cout<<( ans ? "Yes" : "No")<<"\n";
    }
    return 0;
}
// } Driver Code Ends