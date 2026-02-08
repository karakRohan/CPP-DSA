#include <bits/stdc++.h>
using namespace std;

bool isOperator(char ch){
    return (ch=='+' || ch=='-' || ch=='*' || ch=='/');
}

int main()
{
    string s = "-/*+79483"; // Prefix Expression

    stack<string> values;   // <-- only this change

    for (int i = s.length() - 1; i >= 0; i--) // SAME reverse loop
    {
        if (!isOperator(s[i]))   // SAME check as your digit check
        {
            string temp(1, s[i]);  
            values.push(temp);
        }
        else
        {
            // SAME pop pattern as your evaluation code
            string val1 = values.top(); 
            values.pop();
            string val2 = values.top(); 
            values.pop();

            string ans = "(" + val1 + s[i] + val2 + ")";
            values.push(ans);
        }
    }

    cout << "Infix Expression : " << values.top() << endl;
}
