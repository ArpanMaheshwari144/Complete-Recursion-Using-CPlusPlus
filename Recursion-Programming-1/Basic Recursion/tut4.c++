// Print factorial of a number n.

#include <bits/stdc++.h>
using namespace std;

void printFactorial(int n, int fact)
{
    if (n == 0)
    {
        cout << fact;
        return;
    }
    fact *= n;
    printFactorial(n - 1, fact);
}

int main()
{
    printFactorial(5, 1);

    return 0;
}