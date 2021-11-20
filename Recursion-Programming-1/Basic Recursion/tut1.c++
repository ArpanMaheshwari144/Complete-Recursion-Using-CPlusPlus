// Print numbers from n to 1.

#include <bits/stdc++.h>
using namespace std;

void printNumbersNTo1(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    printNumbersNTo1(n - 1);
}

int main()
{
    printNumbersNTo1(5);

    return 0;
}