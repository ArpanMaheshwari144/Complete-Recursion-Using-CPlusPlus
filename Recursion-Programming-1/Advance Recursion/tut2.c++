// Count total paths in a Maze to move from (0, 0) to (n, m). (We only move right or downwards)

#include <bits/stdc++.h>
using namespace std;

int countPaths(int i, int j, int m, int n)
{
    if (i == n || j == m)
    {
        return 0;
    }

    if (i == m - 1 || j == n - 1)
    {
        return 1;
    }

    // move right
    int rightPaths = countPaths(i, j + 1, m, n);

    // move down
    int downPaths = countPaths(i + 1, j, m, n);

    return rightPaths + downPaths;
}

int main()
{

    int m = 3, n = 3;
    cout << countPaths(0, 0, m, n);

    return 0;
}