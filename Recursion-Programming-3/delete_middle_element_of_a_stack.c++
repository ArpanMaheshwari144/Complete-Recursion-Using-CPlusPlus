#include <bits/stdc++.h>
using namespace std;

stack<int> solve(stack<int> &s, int k)
{
    // Base Condition
    if (k == 0)
    {
        s.pop();
    }
    else
    {
        // Hypothesis
        int temp = s.top();
        s.pop();
        solve(s, k - 1);

        // Induction
        s.push(temp);
    }
    return s;
}

stack<int> deleteMiddleElementOfStack(stack<int> &s, int k)
{
    if (s.size() == 1)
    {
        return s;
    }
    else
    {
        s = solve(s, k - 1);
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
    s.push(6);
    s.push(7);

    if (s.size() == 0)
    {
        cout << "Please enter the elements in the stack";
        exit(0);
    }

    int n = s.size();
    int k = ((n / 2) + 1); // gives the index of that element which was deleted from the stack

    cout << "Before deleting the " << k << "th element in the stack: ";
    showStack(s);

    cout << endl;

    deleteMiddleElementOfStack(s, k);

    cout << "After deleting the " << k << "th element in the stack: ";
    showStack(s);

    return 0;
}