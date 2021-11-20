// Print numbers from 1 to 5.

#include <bits/stdc++.h>
using namespace std;

void printNumbers1ToN(int n)
{
    if (n == 6)
    {
        return;
    }
    cout << n << " ";
    printNumbers1ToN(n + 1);
}

int main()
{
    printNumbers1ToN(1);

    return 0;
}