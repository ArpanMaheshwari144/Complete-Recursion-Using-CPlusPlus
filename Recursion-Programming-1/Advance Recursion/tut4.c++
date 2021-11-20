// Find the number of ways in which you can invite n people to your party, single or in pairs

#include <bits/stdc++.h>
using namespace std;

int pairFriends(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    // single
    int ways1 = pairFriends(n - 1);

    // pairs
    int ways2 = (n - 1) * pairFriends(n - 2);

    return ways1 + ways2;
}

int main()
{
    int n = 3;
    cout << pairFriends(n);

    return 0;
}