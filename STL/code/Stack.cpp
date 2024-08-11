#include<bits/stdc++.h>
using namespace std;

#define LL long long

int main(){
    
    stack<int> s;
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        s.push(a);
    }

    while (!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    
    

    return 0;
};