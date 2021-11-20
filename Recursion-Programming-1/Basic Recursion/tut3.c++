// Print the sum of first n natural numbers

#include <bits/stdc++.h>
using namespace std;

void printSum(int n, int sum)
{
    if (n == 0)
    {
        cout << sum;
        return;
    }
    sum += n;
    printSum(n - 1, sum);
}

int main()
{
    printSum(5, 0);
    return 0;
}