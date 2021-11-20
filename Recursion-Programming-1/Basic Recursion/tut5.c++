// Print the fibonacci sequence till nth term.

#include <bits/stdc++.h>
using namespace std;

void printFibonacci(int a, int b, int n)
{
    if (n == 0)
    {
        return;
    }
    cout << a << " ";
    printFibonacci(b, a + b, n - 1);
}

int main()
{
    printFibonacci(0, 1, 5);

    return 0;
}