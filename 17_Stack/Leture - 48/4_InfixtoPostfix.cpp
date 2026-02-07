#include <bits/stdc++.h>
using namespace std;

int priority(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else
        return 2; // '+ , /'
}

string solve(string val1, string val2, char ch)
{
    // We Have to store prefix in the ans
    // prefix is -> operator + value1 + value2
    string s = ""; 
    s += val1;
    s += val2;
    s.push_back(ch);
    return s;
}


int main()
{
    string s = "(7+9)*4/8-3"; // Infix Expression
    // We need to stacks, 1 for values, 1 for operators
    stack<string> values;
    stack<char> ops;
    for (int i = 0; i < s.length(); i++)
    {
        // check if s[i] is a digit (0-9)
        if (s[i] >= 48 && s[i] <= 57)
        {                           // Digit
            values.push(to_string(s[i] - 48)); // Convert char to int and push into values stack
        }
        else
        { // s[i] it is -> *, /, +, -, (,)
            if (ops.size() == 0)
                ops.push(s[i]);
            else if (s[i] == '(')
                ops.push(s[i]);
            else if (ops.top() == '(')
                ops.push(s[i]);
            else if (s[i] == ')')
            {
                while (ops.top() != '(')
                {
                    // Work
                    char ch = ops.top();
                    ops.pop();

                    string val2 = values.top();
                    values.pop();
                    string val1 = values.top();
                    values.pop();

                    string ans = solve(val1, val2, ch);
                    values.push(ans);
                }
                ops.pop(); // remove '('
            }

            else if (priority(s[i]) > priority(ops.top()))
                ops.push(s[i]);

            else
            { // Priority (s[i]) <= Priority (ops.top())
                while (ops.size() > 0 && priority(s[i]) <= priority(ops.top()))
                {
                    // i have to do values1 ops values2
                    char ch = ops.top();
                    ops.pop();
                    string val2 = values.top();
                    values.pop();
                    string val1 = values.top();
                    values.pop();
                    string ans = solve(val1, val2, ch);
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
        string val2 = values.top();
        values.pop();
        string val1 = values.top();
        values.pop();
        string ans = solve(val1, val2, ch);
        values.push(ans);
    }
    cout << "The Result of Infix Evaluation is : " << values.top() << endl;
}