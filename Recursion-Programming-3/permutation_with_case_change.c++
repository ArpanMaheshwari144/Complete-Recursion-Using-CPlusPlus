/*Print all permutations of a string keeping the sequence but changing cases.
Examples:
Input : ab
Output : AB Ab ab aB*/
#include <bits/stdc++.h>
using namespace std;

void permutationWithCaseChange(string input, string output)
{
    if (input.length() == 0)
    {
        cout << output << endl;
        return;
    }

    string output1 = output;
    string output2 = output;

    output1.push_back(input[0]);
    output2.push_back(toupper(input[0]));

    input.erase(input.begin() + 0);

    permutationWithCaseChange(input, output1);
    permutationWithCaseChange(input, output2);
}

int main()
{
    string input = "ab"; // assuming these all are in small case
    string output = " ";

    permutationWithCaseChange(input, output);

    return 0;
}