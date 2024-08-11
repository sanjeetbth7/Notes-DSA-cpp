
#include<bits/stdc++.h>
using namespace std;

#define LL long long
// revese of a array using recursion
void reverseArray(vector<int>&v, int i){
    int n = v.size();
    if(i>= n/2) return;
    swap(v[i],v[n-i-1]);
    reverseArray(v,i+1);
}

// Checking a string is palindrome or not
bool isPalindrome(string v, int i){
    int n = v.length();
    if(i>= n/2) return 1;
    if(v[i]!=v[n-i-1]) return 0;
    
    return isPalindrome(v,i+1);
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);

        for(auto &e:v) cin>>e;
        reverseArray(v,0);

        for(auto e:v)cout<<e<<" ";
        cout<<endl;

        // string s;
        // cin>>s;
        // cout<<isPalindrome(s,0)<<endl;
    }
    
    return 0;
};