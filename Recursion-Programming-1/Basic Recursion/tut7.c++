// Print x^n (with stack height = logn)

#include <bits/stdc++.h>
using namespace std;

int printPower(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return printPower(x, n / 2) * printPower(x, n / 2);
    }
    else
    {
        return x * printPower(x, n / 2) * printPower(x, n / 2);
    }
}

int main()
{
    int x = 2, n = 5;
    int output = printPower(x, n);
    cout << output;

    return 0;
}