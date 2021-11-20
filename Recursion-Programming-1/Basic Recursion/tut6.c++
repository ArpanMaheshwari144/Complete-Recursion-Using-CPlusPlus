// Print x^n (with stack height = n)

#include <bits/stdc++.h>
using namespace std;

int printPower(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (x == 0)
    {
        return 0;
    }

    int x_ = printPower(x, n - 1);
    int xn = x * x_;
    return xn;
}

int main()
{
    int x = 2, n = 5;
    int output = printPower(x, n);
    cout << output;

    return 0;
}