#include <bits/stdc++.h>
using namespace std;

long long int factorial(long long int n)
{
    // Base Condition
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}

int main()
{
    long long int n = 5;
    if (n < 0)
    {
        cout << "Please enter a valid input";
        exit(0);
    }
    long long int result = factorial(n);
    cout << "The factorial of " << n << " is: " << result;

    return 0;
}