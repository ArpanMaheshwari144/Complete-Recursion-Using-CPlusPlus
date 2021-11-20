// Print all unique subsequences of a string

#include <bits/stdc++.h>
using namespace std;

void printSubseq(set<string> &st, string s)
{
    if (s.size() == 0)
    {
        return;
    }

    // If current string is not already present.
    if (st.find(s) == st.end())
    {
        st.insert(s);

        // Traverse current string, one by one remove every character and recur.
        for (int i = 0; i < s.size(); i++)
        {
            string t = s;
            t.erase(i, 1);
            printSubseq(st, t);
        }
    }
    return;
}

// Driver code
int main()
{
    string s = "aaa";
    set<string> st;
    set<string>::iterator it;
    printSubseq(st, s);
    for (auto it = st.begin(); it != st.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}