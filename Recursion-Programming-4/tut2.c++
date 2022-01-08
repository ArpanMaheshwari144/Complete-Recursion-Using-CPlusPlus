// Chaeck if a string is palidrome or not

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int i, string str)
{
    if (i >= str.size() / 2)
    {
        return true;
    }

    if (str[i] != str[str.size() - i - 1])
    {
        return false;
    }

    return isPalindrome(i + 1, str);
}

int main()
{
    string str = "madam";
    cout << isPalindrome(0, str);

    return 0;
}