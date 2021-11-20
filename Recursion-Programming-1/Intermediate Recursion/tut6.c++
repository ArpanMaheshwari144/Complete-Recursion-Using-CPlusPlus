//  Remove duplicates in a string.

#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string str, int idx, bool present[])
{
    if (idx == str.length())
    {
        return "";
    }
    char curr = str[idx];
    if (present[curr - 'a'])
    {
        return removeDuplicates(str, idx + 1, present);
    }
    else
    {
        present[curr - 'a'] = true;
        return curr + removeDuplicates(str, idx + 1, present);
    }
}

int main()
{
    string str = "abcadbcefghabi";
    bool present[] = {str.length()};
    cout << removeDuplicates(str, 0, present);

    return 0;
}