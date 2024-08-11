//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
private:
    long long power(long long x, long long y)
    {
        if (y == 0)
            return 1;
        return x * power(x, y - 1);
    }
    long long toDecimal(string strNum)
    {
        long long ans = 0;
        int n = strNum.length();
        for (int i = 0; i < n; i++)
        {
            if ((strNum[n - i - 1] - '0'))
                ans += power(2, i);
        }
        return ans;
    }

    string to_binary(long long number)
    {
        long long n = (long long)(log2(number));
        return bitset<64>(number).to_string().substr(64 - n - 1);
    }

public:
    long long reversedBits(long long x)
    {
        if(x==0) return 0;
        long long ans=0;
        int n = 31;
        while (x)
        {
            if(x&1) ans+= power(2,n);
            n--;
            x>>=1;
            cout<<x<<endl;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long X;

        cin >> X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends