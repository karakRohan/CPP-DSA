#include <bits/stdc++.h>
// #include<stack>
using namespace std;
int main()
{
    stack<int> stack1;
    cout << "Size of stack is: " << stack1.size() << endl;
    stack1.push(10);
    stack1.push(20);
    stack1.push(30);
    stack1.push(40);
    stack1.push(50);

    // cout << "Size of stack after pushing 4 elements is: " << stack1.size() << endl;
    // stack1.pop();
    // cout << "Size of stack after popping 1 element is: " << stack1.size() << endl;
    // cout << "Top element of stack is: " << stack1.top() << endl;
    // cout<<stack1.empty()<<endl;
    // return 0;

    // // printing in reverse order :- Empty in the Stack
    // Beker method :- 1
    // while (stack1.size()>0)
    // {
    //     cout << stack1.top() << " ";
    //     stack1.pop();
    // }


    // Real Method :- 1
    // We will use extra stack
    stack<int> temp;
    while (stack1.size()>0)
    {
        cout << stack1.top() << " ";
        int x = stack1.top();
        stack1.pop();
        temp.push(x);
    }

    // Putting elements back from temp to stack
    

}

