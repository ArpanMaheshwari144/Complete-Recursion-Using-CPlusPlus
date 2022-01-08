// Print all subsequences

#include <bits/stdc++.h>
using namespace std;

void printAllSubsequences(int index, vector<int> &ds, int arr[], int n)
{
    if (index == n)
    {
        for (auto it : ds)
        {
            cout << it << " ";
        }
        if (ds.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }

    // not pick the current element
    printAllSubsequences(index + 1, ds, arr, n);

    // pick the current element
    ds.push_back(arr[index]);
    printAllSubsequences(index + 1, ds, arr, n);
    ds.pop_back();
}

int main()
{
    int arr[] = {3, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ds;
    printAllSubsequences(0, ds, arr, n);

    return 0;
}