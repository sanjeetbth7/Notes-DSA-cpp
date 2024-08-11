#include<bits/stdc++.h>
using namespace std;

#define LL long long

class Solution {

public:
    int kthGrammar(int n, int k) {
   
        if(k==1) return 0;
        if(k%2==0) return !kthGrammar(n-1,k/2);
        else return kthGrammar(n-1,k/2 +1);
    }
};

int main(){
    int t;
    cin>>t;
    Solution s;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        cout<<s.kthGrammar(n,k)<<endl;
    }
    
    return 0;
};