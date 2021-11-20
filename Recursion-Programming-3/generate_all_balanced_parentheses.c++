/*Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses of length 2*n.
For example, given n = 3, a solution set is:
"((()))", "(()())", "(())()", "()(())", "()()()"
*/
#include <bits/stdc++.h>
using namespace std;

void solve(int openBrackets, int closeBrackets, string output, vector<string> &v)
{
    if (openBrackets == 0 && closeBrackets == 0)
    {
        v.push_back(output);
        return;
    }

    // Ye choice humme hamesha milegi
    // Opening brackets choice are always present
    if (openBrackets != 0)
    {
        string output1 = output;

        output1.push_back('(');

        solve(openBrackets - 1, closeBrackets, output1, v);
    }

    // Ye choice hume kabhi mil rahi hai ya phir kabhi nhi bhi mil rhi hai
    // If closing bracket numbers are greater than opening bracket numbers
    if (closeBrackets > openBrackets)
    {
        string output2 = output;

        output2.push_back(')');

        solve(openBrackets, closeBrackets - 1, output2, v);
    }
}

vector<string> generateAllBalancedParentheses(int n)
{
    vector<string> v;

    int openBrackets = n;
    int closeBrackets = n;

    string output = " ";

    solve(openBrackets, closeBrackets, output, v);

    return v;
}

int main()
{
    int n = 3; // this means we have 3 open brackets and 3 close brackets means total 6 brackets

    vector<string> v = generateAllBalancedParentheses(n);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}