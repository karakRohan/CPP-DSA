#include <bits/stdc++.h>
using namespace std;

string solve(string val1, string val2, char ch)
{
    string s = "";
    s += val1;
    s.push_back(ch);
    s += val2;
    return s;
}

int main()
{
    string s = "79+4*8/3-"; // Postfix Expression
    // We need onr stacks -> values
    stack<string> values;
    for (int i = 0; i < s.length(); i++)
    {
        // check if s[i] is a digit (0-9)
        if (s[i] >= 48 && s[i] <= 57)
        {                           // Digit
            values.push(to_string(s[i] - 48)); // Convert char to int and push into values stack
        }
        else
        { // s[i] it is -> *, /, +, -
            // Kaam karo
            string val2 = values.top();
            values.pop();
            string val1 = values.top();
            values.pop();
            string ans = solve(val1, val2, s[i]);
            values.push(ans);
        }
    }

    cout << "The Result of Postfix Evaluation is : " << values.top() << endl;
}