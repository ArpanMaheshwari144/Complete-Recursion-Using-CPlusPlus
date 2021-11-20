// Question -> Factorial

#include <bits/stdc++.h>
using namespace std;

long long int getFactorial(int n)
{

    //Base Condition
    if (n <= 1)
    {
        return 1;
    }

    // subproblem or recursive call
    return n * getFactorial(n - 1);
}

int main()
{

    int n;
    cout << "Please Enter the Input: ";
    cin >> n;

    cout << "Value of " << n << "! is: " << getFactorial(n) << endl;
}
