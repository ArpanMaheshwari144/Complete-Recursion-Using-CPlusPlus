// Count the Subsequences whose sum is k

#include <bits/stdc++.h>
using namespace std;

int solve(int index, int initialSum, int target, int arr[], int n)
{
    if (index == n)
    {
        if (initialSum == target)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    // pick
    initialSum += arr[index];
    int left = solve(index + 1, initialSum, target, arr, n);

    initialSum -= arr[index];

    // not pick
    int right = solve(index + 1, initialSum, target, arr, n);

    return left + right;
}

int main()
{
    int arr[] = {1, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;
    cout << solve(0, 0, target, arr, n);

    return 0;
}