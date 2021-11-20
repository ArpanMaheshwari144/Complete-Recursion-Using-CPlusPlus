//  Print all the subsequences of a string.

#include <bits/stdc++.h>
using namespace std;

void printSubseq(string str, int idx, string res)
{
    if (idx == str.length())
    {
        cout << res << endl;
        return;
    }
    // choose
    printSubseq(str, idx + 1, res + str[idx]);

    // don't choose
    printSubseq(str, idx + 1, res);
}

int main()
{
    string str1 = "abc";
    string str2 = "aaa";
    printSubseq(str1, 0, "");

    return 0;
}