/*Given a string S, we can transform every letter individually to be lowercase or uppercase to create another string.  Return a list of all possible strings we could create.
Examples:
Input: S = "a1b2"
Output: ["a1b2", "a1B2", "A1b2", "A1B2"]
Input: S = "3z4"
Output: ["3z4", "3Z4"]
Input: S = "12345"
Output: ["12345"]*/
#include <bits/stdc++.h>
using namespace std;

void solve(string input, string output, vector<string> &v)
{
    if (input.length() == 0)
    {
        v.push_back(output);
        return;
    }

    // isalpha() means letter is alphabet or not
    if (isalpha(input[0]))
    {
        string output1 = output;
        string output2 = output;

        output1.push_back(tolower(input[0]));
        output2.push_back(toupper(input[0]));

        input.erase(input.begin() + 0); // 0 represents index

        solve(input, output1, v);
        solve(input, output2, v);
    }
    else
    {
        string output1 = output;

        output1.push_back(input[0]);

        input.erase(input.begin() + 0);

        solve(input, output1, v);
    }
}

vector<string> letterCasePermutation(string s)
{
    string input = s;
    string output = "";

    vector<string> v;

    solve(input, output, v);

    return v;
}

int main()
{
    string input = "a1B2";

    vector<string> v = letterCasePermutation(input);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}