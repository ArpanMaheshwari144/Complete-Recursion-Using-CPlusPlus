// Print all subsets of a set of first n natural numbers

#include <bits/stdc++.h>
using namespace std;

void printSubset(vector<int> subset)
{
    for (int i = 0; i < subset.size(); i++)
    {
        cout << subset[i] << " ";
    }
    cout << endl;
}

void findSubsets(int n, vector<int> subset)
{
    if (n == 0)
    {
        printSubset(subset);
        return;
    }

    // add hoga
    subset.push_back(n);
    findSubsets(n - 1, subset);

    // add nhi hoga
    subset.erase(subset.begin() + subset.size() - 1); // erase function ek iterator leta hai
    findSubsets(n - 1, subset);
}

int main()
{
    int n = 3;
    vector<int> subset;
    findSubsets(n, subset);

    return 0;
}