//  Check if an array is sorted (strictly increasing). - O(n)

#include <bits/stdc++.h>
using namespace std;

bool checkIfIncreasing(int arr[], int idx, int len)
{
    if (idx == len - 1)
    {
        return true;
    }
    if (!checkIfIncreasing(arr, idx + 1, len))
    {
        return false;
    }
    return arr[idx] < arr[idx + 1];
}

int main()
{
    // int arr1[] = {1, 2, 3, 4, 5};
    int arr1[] = {1, 6, 3, 4, 5};
    int len = sizeof(arr1) / sizeof(arr1[0]);

    if (checkIfIncreasing(arr1, 0, len))
    {
        cout << "Strictly Increasing";
    }
    else
    {
        cout << "Not Strictly Increasing";
    }

    return 0;
}