// Question -> Sorted or Unsorted

#include <bits/stdc++.h>
using namespace std;

// index -> current index of input array
bool checkSorted(vector<int> arr, int index)
{
    // traversed the entire array
    if (index >= arr.size())
    {
        return true;
    }

    if (arr[index] < arr[index - 1])
    {
        return false;
    }
    return checkSorted(arr, index + 1);
}

int main()
{

    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter Elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool answer = checkSorted(arr, 1);
    if (answer)
    {
        cout << "array is sorted";
    }
    else
    {
        cout << "array is not sorted";
    }
}
