// Question -> Counting problem

#include <bits/stdc++.h>
using namespace std;

void getCounting(int n)
{

    // Base Condition
    if (n <= 0)
    {
        return;
    }

    // subproblem or recursive call
    // prints in ascending order
    /* If a recursive function calling itself and that recursive call is the first statement in the function then it’s known as Head Recursion. */
    // getCounting(n - 1);
    // cout << n << " ";

    // prints in descending order
    /* If a recursive function calling itself and that recursive call is the last statement in the function then it’s known as Tail Recursion. */
    cout << n << " ";
    getCounting(n - 1);
}

int main()
{

    int n;
    cout << "Please Enter the Input: ";
    cin >> n;

    cout << "Counting: ";
    getCounting(n);
}
