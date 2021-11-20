// Question -> Jumps – Number of ways to reach destination

/* Problem: You are given a staircase, you need to find the total number of ways to reach the nth stair from the bottom of the staircase when you are only allowed to climb 1, 2 or 3 stairs at a time.

Problem description: The problem needs you to find total possible ways through which we can reach our destination, we are allowed to take a stride of a maximum of 3 jumps from the current position. You are required to develop a certain algorithm that can find the total possible arrangement such that you can reach your destination in minimum possible time constraints.

Input: The first test case of input is the T number of the test case, each test case consists of a single integer the nth stair.

Output: Print the number of ways to reach nth stair from bottom in a new line for each test case.

Examples:
Input:
T = 1
N = 4

Output:
7, total possible ways:
1+1+1+1
1+1+2
1+2+1
1+3
2+1
2+2
3+1
*/

#include <bits/stdc++.h>
using namespace std;

int numberOfJumps(int n)
{
    if (n < 0)
    {
        return 0;
    }

    if (n == 0)
    {
        return 1;
    }

    return numberOfJumps(n - 1) + numberOfJumps(n - 2) + numberOfJumps(n - 3);
}

int main()
{

    cout << "Enter the value of n: ";
    int n;
    cin >> n;

    cout << "NUMBER OF JUMPS -> " << numberOfJumps(n) << " ";
}
