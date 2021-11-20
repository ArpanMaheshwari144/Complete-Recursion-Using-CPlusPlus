// Question -> Subsequence of a string

#include <bits/stdc++.h>
using namespace std;

void getSubsequence(string str, int strIndex, string output)
{
    // base condition
    if (strIndex == str.length())
    {
        cout << output << " ";
        return;
    }

    // nahi lera
    getSubsequence(str, strIndex + 1, output);

    // lera hai
    output.push_back(str[strIndex]);
    getSubsequence(str, strIndex + 1, output);
}

int main()
{
    string str;
    cout << "Enter the String: ";
    cin >> str;

    cout << "Printing all the Subsequences: ";
    string output = "";
    getSubsequence(str, 0, output);
}
