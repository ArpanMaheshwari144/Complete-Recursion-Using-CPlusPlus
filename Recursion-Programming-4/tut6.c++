// Print any Subsequences whose sum is k

#include <bits/stdc++.h>
using namespace std;

bool solve(int index, vector<int> &ds, int initialSum, int target, int arr[], int n)
{
    if (index == n)
    {
        if (initialSum == target)
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
            return true;
        }
        else
        {
            return false;
        }
    }

    // pick
    ds.push_back(arr[index]);
    initialSum += arr[index];

    if (solve(index + 1, ds, initialSum, target, arr, n))
    {
        return true;
    }

    initialSum -= arr[index];
    ds.pop_back();

    // not pick
    if (solve(index + 1, ds, initialSum, target, arr, n))
    {
        return true;
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;
    vector<int> ds;
    solve(0, ds, 0, target, arr, n);

    return 0;
}