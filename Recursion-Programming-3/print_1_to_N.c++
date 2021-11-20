#include <bits/stdc++.h>
using namespace std;

void print1ToN(int n)
{
    // Base Condition
    if (n <= 0)
    {
        cout << "Please enter valid input";
        return;
    }
    else if (n == 1)
    {
        cout << n << " ";
        return;
    }
    else
    {
        print1ToN(n - 1); // Hypothesis
        cout << n << " "; // Induction
    }
}

void printNTo1(int n)
{
    // Base Condition
    if (n <= 0)
    {
        cout << "Please enter valid input";
        return;
    }
    else if (n == 1)
    {
        cout << n << " ";
        return;
    }
    else
    {
        cout << n << " "; // Hypothesis
        printNTo1(n - 1); // Induction
    }
}

int main()
{
    int n = 10;
    print1ToN(n);

    cout << endl;

    printNTo1(n);

    return 0;
}