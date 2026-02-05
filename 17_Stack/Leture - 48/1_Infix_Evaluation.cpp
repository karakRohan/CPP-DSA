#include <bits/stdc++.h>
using namespace std;

int priority(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else
        return 2; // + , /
}

int solve(int val1, int val2, char ch)
{
    if (ch == '+')
        return val1 + val2;
    else if (ch == '-')
        return val1 - val2;
    else if (ch == '*')
        return val1 * val2;
    else
        return val1 / val2;
}

int main()
{
    string s = "2+6*4/8-3"; // Infix Expression
    // We need to stacks, 1 for values, 1 for operators
    stack<int> values;
    stack<char> ops;
    for (int i = 0; i < s.length(); i++)
    {
        // check if s[i] is a digit (0-9)
        if (s[i] >= 48 && s[i] <= 57)
        {                           // Digit
            values.push(s[i] - 48); // Convert char to int and push into values stack
        }
        else
        { // s[i] it is -> *, /, +, -
            if (ops.size() == 0 || priority(s[i]) > priority(ops.top()))
                ops.push(s[i]);
            else
            { // Priority (s[i]) <= Priority (ops.top())
                while (ops.size() > 0 && priority(s[i]) <= priority(ops.top()))
                {
                    // i have to do values1 ops values2
                    char ch = ops.top();
                    ops.pop();
                    int val2 = values.top();
                    values.pop();
                    int val1 = values.top();
                    values.pop();
                    int ans = solve(val1, val2, ch);
                    values.push(ans);
                }
                ops.push(s[i]);
            }
        }
    }

    // The Operators Stack Can have values.
    // So make it empty
    while (ops.size() > 0)
    {
        char ch = ops.top();
        ops.pop();
        int val2 = values.top();
        values.pop();
        int val1 = values.top();
        values.pop();
        int ans = solve(val1, val2, ch);
        values.push(ans);
    }
    cout << "The Result of Infix Evaluation is : " << values.top() << endl;
}