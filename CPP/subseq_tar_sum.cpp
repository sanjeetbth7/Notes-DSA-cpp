#include<bits/stdc++.h>
using namespace std;

#define LL long long

class Solution {
private:
    int func(int i,int tar, vector<int>&v){
        if(i>= v.size()){
            if(tar>=0) return 1;
            return 0;
        }
        int l = func(i+1,tar-v[i],v); 
        int r = func(i+1,tar,v);
        return l+r;
    }

public:
    int numSubseq(vector<int>& nums, int target) {    
        return func(0,target,nums)-1;        
    }
};
int main(){
    int t;
    cin>>t;
    Solution s;
    while (t--)
    {
        int n, tar;
        cin>>n>>tar;
        vector<int>v(n);
        for(auto &e:v) cin>>e;
        cout<<s.numSubseq(v,tar)<<endl;
    }
    

    return 0;
};