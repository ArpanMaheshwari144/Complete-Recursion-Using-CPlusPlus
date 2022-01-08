// Fibonacci number

#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }

    int first = fib(n - 1);
    int second = fib(n - 2);
    return first + second;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << n << "th fibonacci number is: " << fib(n);

    return 0;
}