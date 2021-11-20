//  Place tiles of size 1*m in a floor of size n*m

#include <bits/stdc++.h>
using namespace std;

int placeTiles(int n, int m)
{
    if (n < m)
    {
        return 1;
    }
    else if (n == m)
    {
        return 2;
    }

    int horizontalPlacements = placeTiles(n - 1, m);

    int verticalPlacements = placeTiles(n - m, m);

    return horizontalPlacements + verticalPlacements;
}

int main()
{
    int n = 4, m = 2;
    cout << placeTiles(n, m);

    return 0;
}