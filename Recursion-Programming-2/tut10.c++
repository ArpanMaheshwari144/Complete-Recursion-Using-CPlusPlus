// Question -> Permutation of a String

#include <bits/stdc++.h>
using namespace std;

void getPerm(string str, int index)
{

    // base condition
    if (index >= str.length())
    {
        cout << str << " ";
        return;
    }

    for (int i = index; i < str.length(); i++)
    {

        swap(str[index], str[i]);
        getPerm(str, index + 1);
        swap(str[index], str[i]); // backtrack
    }
}

int main()
{
    string str;
    cout << "Enter the String: ";
    cin >> str;

    cout << "Printing all the permutations: ";
    getPerm(str, 0);
}
