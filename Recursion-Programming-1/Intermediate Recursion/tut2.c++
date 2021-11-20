// Print a string in reverse.

#include <bits/stdc++.h>
using namespace std;

string revString(string str)
{
    if (str.length() == 1)
    {
        return str;
    }

    char currChar = str[0];
    string nextString = revString(str.substr(1));
    return nextString + currChar;
}

int main()
{
    string str = "abcd";
    string reversed = revString(str);
    cout << reversed;

    return 0;
}