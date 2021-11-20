/*The tower of Hanoi is a famous puzzle where we have three rods and N disks. The objective of the puzzle is to move the entire stack to another rod. You are given the number of discs N. Initially, these discs are in the rod 1. You need to print all the steps of discs movement so that all the discs reach the 3rd rod. Also, you need to find the total moves.*/
#include <bits/stdc++.h>
using namespace std;

int numberOfSteps = 0;

void towerOfHanoi(int numberOfPlates, char source, char destination, char helper)
{
    // Base Condition
    if (numberOfPlates == 1)
    {
        numberOfSteps++;
        cout << "StepCount: " << numberOfSteps << " -----> ";

        cout << "Moving plate " << numberOfPlates << " from " << source << " to " << destination << endl;

        return;
    }

    // Hypothesis
    towerOfHanoi(numberOfPlates - 1, source, helper, destination);

    numberOfSteps++;
    cout << "StepCount: " << numberOfSteps << " -----> ";

    // Induction
    cout << "Moving plate " << numberOfPlates << " from " << source << " to " << destination << endl;

    towerOfHanoi(numberOfPlates - 1, helper, destination, source);

    return;
}

int main()
{
    int numberOfPlates = 3;
    char source = 'A', helper = 'B', destination = 'C';

    towerOfHanoi(numberOfPlates, source, destination, helper);
    return 0;
}