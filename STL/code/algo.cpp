/*built in algoritms 

*/ 

#include<bits/stdc++.h>
using namespace std;

#define LL long long

int main(){
    vector<int>v = {8,2, 5,4,3,7};
    int min = *min_element(v.begin(),v.end());// start, end+1
    cout<<min<<endl;
    min = *min_element(v.begin()+2,v.end());// start, end+1
    cout<<min<<endl;
    int max = *max_element(v.begin(),v.end());// start, end+1
    cout<<max<<endl;
    max = *max_element(v.begin()+3,v.end());// start, end+1
    cout<<max<<endl;
    int sum = accumulate(v.begin(),v.end(),0);// start, end+1 , starting sum=0
    cout<<sum<<endl;
    sum = accumulate(v.begin()+3,v.end(),0);// start, end+1 , starting sum=0
    cout<<sum<<endl;
    int cnt = count(v.begin(),v.end(),3);
    cout<<cnt<<endl;
    cnt = count(v.begin(),v.begin()+4,3);
    cout<<cnt<<endl;
    auto it = find(v.begin(),v.end(),3);
    if(it!=v.end()) cout<<*it<<endl;
    else cout<<"Element Not found!!!"<<endl;
    return 0;
};