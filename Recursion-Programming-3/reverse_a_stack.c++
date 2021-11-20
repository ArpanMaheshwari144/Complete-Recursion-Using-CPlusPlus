#include <bits/stdc++.h>
using namespace std;

stack<int> insert(stack<int> &s, int element)
{
    // Base Condition
    if (s.size() == 0)
    {
        s.push(element);
    }
    else
    {
        // Hypothesis
        int temp = s.top();
        s.pop();
        s = insert(s, element);

        // Induction
        s.push(temp);
    }
    return s;
}

stack<int> reverseAStack(stack<int> &s)
{
    // Base Condition
    if (s.size() == 1)
    {
        return s;
    }
    else
    {
        // Hypothesis
        int temp = s.top();
        s.pop();
        reverseAStack(s);

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
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    if (s.size() == 0)
    {
        cout << "Please enter the elements in the stack";
        exit(0);
    }

    cout << "Before reversing the stack: ";
    showStack(s);

    reverseAStack(s);

    cout << "\nAfter reversing the stack: ";
    showStack(s);

    return 0;
}

/*  Before Reversing       Printing the Stack   |  After Reversing        Printing the Stack                                           |
    |  5  |                                     |  |  1  |
    |  4  |                                     |  |  2  |
    |  3  |         --->   5 4 3 2 1            |  |  3  |       ---->   1 2 3 4 5
    |  2  |                                     |  |  4  |
    |  1  |                                     |  |  5  |
*/