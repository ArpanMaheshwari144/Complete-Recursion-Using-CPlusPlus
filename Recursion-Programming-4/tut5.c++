// Printing Subsequences whose sum is k

#include <bits/stdc++.h>
using namespace std;

void solve(int index, vector<int> &ds, int initialSum, int target, int arr[], int n)
{
    if (index == n)
    {
        if (initialSum == target)
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }

    // pick
    ds.push_back(arr[index]);
    initialSum += arr[index];
    solve(index + 1, ds, initialSum, target, arr, n);
    initialSum -= arr[index];
    ds.pop_back();

    // not pick
    solve(index + 1, ds, initialSum, target, arr, n);
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