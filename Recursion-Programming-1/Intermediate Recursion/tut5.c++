// Move all ‘x’ to the end of the string. - O(n)

#include <bits/stdc++.h>
using namespace std;

string addX(int count)
{
    string newStr = "x";
    for (int i = 1; i < count; i++)
    {
        newStr += 'x';
    }
    return newStr;
}

string moveAllX(string str, int idx, int count)
{
    if (idx == str.length())
    {
        return addX(count);
    }
    if (str[idx] == 'x')
    {
        return moveAllX(str, idx + 1, count + 1);
    }
    else
    {
        string nextStr = moveAllX(str, idx + 1, count);
        return str[idx] + nextStr;
    }
}

int main()
{
    string str = "abcdefxghxixjxxxk";
    int count = 0;
    string newStr = moveAllX(str, 0, count);
    cout << newStr;

    return 0;
}