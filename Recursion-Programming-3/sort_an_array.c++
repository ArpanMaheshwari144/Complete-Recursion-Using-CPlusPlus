#include <bits/stdc++.h>
using namespace std;

vector<int> insert(vector<int> &v, int tempValue)
{
    // Base Condition
    if (v.size() == 0 || v[v.size() - 1] <= tempValue)
    {
        v.push_back(tempValue);
        return v;
    }

    // Hypothesis
    int value = v[v.size() - 1];
    v.pop_back();
    v = insert(v, tempValue);

    // Induction
    v.push_back(value);

    return v;
}

vector<int> sortAnArray(vector<int> &v)
{
    //Base Condition
    if (v.size() == 1)
    {
        return v;
    }
    else
    {
        // Hypothesis
        int temp = v[v.size() - 1];
        v.pop_back();
        sortAnArray(v);

        // Induction
        v = insert(v, temp);
    }
    return v;
}

void printVector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    vector<int> v = {2, 3, 7, 6, 4, 5, 9};

    if (v.size() == 0)
    {
        cout << "Please enter the elements in the vector";
        exit(0);
    }

    cout << "Before Sorting Using Recursion: ";
    printVector(v);

    sortAnArray(v);

    cout << "\nAfter Sorting Using Recursion: ";
    printVector(v);

    return 0;
}