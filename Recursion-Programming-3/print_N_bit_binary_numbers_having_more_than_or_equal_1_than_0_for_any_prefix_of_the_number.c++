/*Given a positive integer N, print all N bit binary numbers having more 1’s than 0’s for any prefix of the number.
Input:
2
2
3
Output:
11 10
111 110 101*/
#include <bits/stdc++.h>
using namespace std;

void printNBitBinaryNumbersHavingMoreThanOrEqualTo1Than0(int zeros, int ones, int n, string output)
{
    if (n == 0)
    {
        cout << output << endl;
        return;
    }

    // This is for choice '1'
    string output1 = output;

    output1.push_back('1');

    printNBitBinaryNumbersHavingMoreThanOrEqualTo1Than0(zeros, ones + 1, n - 1, output1);

    // This is for choice '0'
    if (ones > zeros)
    {
        string output2 = output;

        output2.push_back('0');

        printNBitBinaryNumbersHavingMoreThanOrEqualTo1Than0(zeros + 1, ones, n - 1, output2);
    }
}

int main()
{
    int n = 3;

    int zeros = 0;
    int ones = 0;

    string output = " ";

    printNBitBinaryNumbersHavingMoreThanOrEqualTo1Than0(zeros, ones, n, output);

    return 0;
}