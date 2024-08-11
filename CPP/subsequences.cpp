// Print all subsequences
/* A subsequence of a given sequence is a sequence that can be derived from the given sequence by deleting some or no elements without changing the order of the remaining elements.

note : contiguous or non-contiguous but order should be mentained
[1,2,3] : [],[1],[2],[3],[1,2],[2,3],[1,2,3], [1,3]

a *substring* is a contiguous sequence of characters within a string. A subsequence is a string that is derived from another sequence by deleting some or none of the elements, while maintaining the relative order of the elements in the original sequence

Note : substring is contiguous with order
[1,2,3] : [1],[2],[3],[1,2],[2,3],[1,2,3]
*/

#include<bits/stdc++.h>
using namespace std;

#define LL long long

class Solution {
public:
    void func(int i, vector<vector<int>>&ans, vector<int> &v, vector<int>&nums){
        if(i>= nums.size()){
            ans.push_back(v);
            return;
        }

        // pick
        v.push_back(nums[i]);
        func(i+1,ans,v,nums);
        //Not pick
        v.pop_back(); // which is added should be removed because we are not picking
        func(i+1,ans,v,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>v;

        func(0,ans,v,nums);
        return ans;
    }
};

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int &e:v)cin>>e;

    Solution ob ;
    vector<vector<int>> powerSet = ob.subsets(v);

    for(auto &e:powerSet){
        cout<<"[";
        for(auto i:e) cout<<i<<" ";
        cout<<"]"<<endl;
    }

    return 0;
};