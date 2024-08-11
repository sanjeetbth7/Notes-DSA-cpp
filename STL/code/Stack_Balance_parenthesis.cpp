//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> s;
        for (char w : x)
        {
            if (!s.empty())
            {
                char c = s.top();
                if (c == '[' && w == ']' || c == '(' && w == ')' || c == '{' && w == '}')
                {
                    s.pop();
                }
                else
                {
                    s.push(w);
                }
            }
            else
            {
                s.push(w);
            }
        }

        if (s.empty())
            return 1;
        return 0;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    string a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        Solution obj;
        if (obj.ispar(a))
            cout << "balanced" << endl;
        else
            cout << "not balanced" << endl;
    }
}
// } Driver Code Ends