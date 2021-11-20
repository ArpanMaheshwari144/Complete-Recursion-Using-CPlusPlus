// Question -> Fast Exponentiation

#include <bits/stdc++.h>
using namespace std;

int getExp(int a, int b)
{

    if (b == 0)
    {
        return 1;
    }

    // subproblem or recursive call
    int aage_ka_answer = getExp(a, b - 1);
    int answer = a * aage_ka_answer;
    return answer;
}

// slow exponentiation
// int expOfTwo(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }

//     int ans = 2 * exp(n - 1);
//     cout << "for n " << n << " ans " << ans << endl;
//     return ans;
// }

// fast exponentiation
int expOfTwo(int n)
{

    if (n == 0)
    {
        return 1;
    }

    int chotta_answer = expOfTwo(n / 2);
    if (n & 1)
    {
        // odd
        return 2 * chotta_answer * chotta_answer;
    }
    else
    {
        // even
        return chotta_answer * chotta_answer;
    }
}

int main()
{
    // int a;
    // cout << "Enter a number: ";
    // cin >> a;
    // cout << "2 to the power " << a << " is: " << expOfTwo(a);

    // int a, b;
    // cout << "Enter the value of 'a' and 'b': ";
    // cin >> a >> b;
    // cout << a << " to the power of " << b << " is -> " << getExp(a, b) << endl;
}
