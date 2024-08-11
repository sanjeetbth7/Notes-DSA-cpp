/* Lemda Functions
[](int x, int y)({return x+y;})(3,4);

*/

#include<bits/stdc++.h>
using namespace std;

#define LL long long

int main(){
    cout<<[](int x, int y){return x+y;}(3,4)<<endl;

    auto sumOfTwoNum = [](int x, int y){return x+y;};
    cout<<sumOfTwoNum(5,6)<<endl;

    vector<int> v = {2,4,3,7};
    cout<<all_of(v.begin(),v.end(),[](int x){ return x%2==0;})<<endl;
    cout<<any_of(v.begin(),v.end(),[](int x){ return x%2==0;})<<endl;
    cout<<none_of(v.begin(),v.end(),[](int x){ return x%2==0;})<<endl;
    return 0;
};