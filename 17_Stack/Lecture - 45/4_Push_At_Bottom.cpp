#include <bits/stdc++.h>
using namespace std;

void print(stack<int>& stack1)
{
    stack<int> temp;
    while(!stack1.empty())
    {
        temp.push(stack1.top());
        stack1.pop();
    }

    while(!temp.empty())
    {
        cout << temp.top() << " ";
        stack1.push(temp.top());
        temp.pop();
    }
    cout << endl;
}

void pushAtBottom(stack<int>& stack1, int val)
{
    stack<int> temp;
    while(!stack1.empty())
    {
        temp.push(stack1.top());
        stack1.pop();
    }

    stack1.push(val);

    while(!temp.empty())
    {
        stack1.push(temp.top());
        temp.pop();
    }
}

// ✅ FIX: Push at any index
void pushAtIdx(stack<int>& stack1, int val, int idx)
{
    stack<int> temp;
    int n = stack1.size();

    // Move top elements to temp
    for(int i = 0; i < n - idx; i++)
    {
        temp.push(stack1.top());
        stack1.pop();
    }

    // Insert value
    stack1.push(val);

    // Restore elements
    while(!temp.empty())
    {
        stack1.push(temp.top());
        temp.pop();
    }
}

int main()
{
    stack<int> stack1;
    stack1.push(10);
    stack1.push(20);
    stack1.push(30);
    stack1.push(40);
    stack1.push(50);

    print(stack1);
    cout << endl;

    pushAtBottom(stack1, 80);
    print(stack1);

    pushAtIdx(stack1, 90, 3);
    cout << endl;
    print(stack1);

    return 0;
}














// #include <bits/stdc++.h>
// // #include<stack>
// using namespace std;
// void print(stack<int>& stack1)
// {
//     stack<int> temp;
//     while (stack1.size()>0)
//     {
//         temp.push(stack1.top());
//         stack1.pop();
//     }

//     // Putting elements back from temp to stack
//     while(temp.size()>0)
//     {
//         cout<<temp.top()<<" ";
//         stack1.push(temp.top());
//         temp.pop();
//     }
//     cout<<endl;
// }

// void pushAtBottom(stack<int>&stack1, int val)
// {
//     stack<int> temp;
//     // Emptying stack1 into temp
//     while(stack1.size()>0)
//     {
//         temp.push(stack1.top());
//         stack1.pop();
//     }
//     stack1.push(val);
//     // Emptying temp back into stack1
//     while(temp.size()>0)
//     {
//         stack1.push(temp.top());
//         temp.pop();
//     }
// }
// int main()
// {
//     stack<int> stack1;
//     stack1.push(10);
//     stack1.push(20);
//     stack1.push(30);
//     stack1.push(40);
//     stack1.push(50);

//     print(stack1);
//     cout<<endl;
//     pushAtBottom(stack1, 80);
//     print(stack1);
//     pushAtIdx(stack1, 90, 3);
//     cout<<endl;
//     print(stack1);
// }

