// Find the occurrence of the first and last occurrence of an element using recursion

#include <bits/stdc++.h>
using namespace std;

void getIndices(string str, char el, int idx, int &first, int &last)
{
    if (idx == str.length())
    {
        return;
    }
    if (str[idx] == el)
    {
        if (first == -1)
        {
            first = idx;
        }
        else
        {
            last = idx;
        }
    }
    getIndices(str, el, idx + 1, first, last);
}

int main()
{
    string str = "tabcdfghijakkk";
    char el = 'a';
    int first = -1;
    int last = -1;

    getIndices(str, el, 0, first, last);

    cout << "First occurence : " << first << endl;
    cout << "Last occurence : " << last;

    return 0;
}