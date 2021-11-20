/*Given a string you need to print all possible strings that can be made by placing spaces (zero or one) in between them. Output should be printed in sorted increasing order of strings.
Input:  str[] = "ABC"
Output: (A B C)(A BC)(AB C)(ABC)*/
#include <bits/stdc++.h>
using namespace std;

void permutationWithSpaces(string input, string output)
{
    if (input.length() == 0)
    {
        cout << output << endl;
        return;
    }

    // string output1 = output + " " + input[0];
    // string output2 = output + input[0];

    // OR

    string output1 = output;
    string output2 = output;

    output1.push_back(' ');
    output1.push_back(input[0]);

    output2.push_back(input[0]);

    input.erase(input.begin() + 0);

    permutationWithSpaces(input, output1);
    permutationWithSpaces(input, output2);
}

int main()
{
    string input = "ABC";
    string output = " ";

    output.push_back(input[0]);
    input.erase(input.begin() + 0);

    permutationWithSpaces(input, output);
    return 0;
}