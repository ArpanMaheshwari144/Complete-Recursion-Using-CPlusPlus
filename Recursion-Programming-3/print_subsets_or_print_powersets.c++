/*Given an array of integers that might contain duplicates, return all possible subsets.
Note:
Elements in a subset must be in non-descending order.
The solution set must not contain duplicate subsets.
The subsets must be sorted lexicographically.
*/
#include <bits/stdc++.h>
using namespace std;

void printSubsets(string input, string output, vector<string> &v)
{
    if (input.length() == 0)
    {
        v.push_back(output);
        return;
    }

    string output1 = output;
    string output2 = output;

    output2.push_back(input[0]);

    // erase(an iterator + index of that element which should be erase)
    input.erase(input.begin() + 0);

    printSubsets(input, output1, v);
    printSubsets(input, output2, v);
}

int main()
{

    string input = "abc";
    string output = " ";

    vector<string> v1;

    cout << "Subsets are: ";
    printSubsets(input, output, v1);

    vector<string> v2;
    map<string, int> mp;

    for (int i = 0; i < v1.size(); i++)
    {
        // checking -> hum jo substring map ke andar dalne wale hai wo phle se to present nhi hai
        if (mp[v1[i]] == false)
        {
            mp[v1[i]]++; // push the substrings to the map
            v2.push_back(v1[i]);
        }
    }

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i];
    }

    return 0;
}