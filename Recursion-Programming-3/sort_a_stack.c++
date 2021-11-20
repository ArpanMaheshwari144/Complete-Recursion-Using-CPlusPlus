#include <bits/stdc++.h>
using namespace std;

stack<int> insert(stack<int> &s, int tempValue)
{
    // Base Condition
    if (s.size() == 0 || s.top() <= tempValue)
    {
        s.push(tempValue);
        return s;
    }

    // Hypothesis
    int value = s.top();
    s.pop();
    s = insert(s, tempValue);

    // Induction
    s.push(value);

    return s;
}

stack<int> sortAStack(stack<int> &s)
{
    //Base Condition
    if (s.size() == 1)
    {
        return s;
    }
    else
    {
        // Hypothesis
        int temp = s.top();
        s.pop();
        sortAStack(s);

        // Induction
        s = insert(s, temp);
    }
    return s;
}

void showStack(stack<int> s)
{
    while (s.size() > 0)
    {
        cout << s.top() << " ";
        s.pop();
    }
}

int main()
{
    stack<int> s;
    s.push(30);
    s.push(-5);
    s.push(18);
    s.push(14);
    s.push(-3);

    if (s.size() == 0)
    {
        cout << "Please enter the elements in the stack";
        exit(0);
    }

    cout << "Before Sorting: ";
    showStack(s);

    sortAStack(s);

    cout << "\nAfter Sorting: ";
    showStack(s);

    return 0;
}

/*  Before Sorting      Printing the Stack   |       After Sorting            Printing the Stack                                           |
    |  -3  |                                 |       |  30  |
    |  14  |                                 |       |  18  |
    |  18  |      --->  -3 14 18 -5 30       |       |  14  |        ---->    30 18 14 -3 -5
    |  -5  |                                 |       |  -3  |
    |  30  |                                 |       |  -5  |
*/