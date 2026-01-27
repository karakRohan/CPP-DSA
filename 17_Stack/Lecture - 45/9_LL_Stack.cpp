#include <iostream>
using namespace std;

class Node
{ // User defined data type
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};



class Stack
{ // User defined data structure
public:
    Node *head;
    int size;
    Stack()
    {
        head = NULL;
        size = 0;
    }
    void push(int val)
    {
        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }
    void pop()
    {
        if (head == NULL)
        {
            cout << "Stack is Empty !!!" << endl;
            return;
        }
        head = head->next;
        size--;
    }
    int top()
    {
        if (head == NULL)
        {
            cout << "Stack is Empty !!!" << endl;
            return -1;
        }
        return head->val;
    }
    void print(Node *temp)
    {
        if (temp == NULL)
        {
            return;
        }
        print(temp->next);
        cout << temp->val << " ";
    }
    void display()
    {
        Node *temp = head;
        print(temp);
        cout << endl;
    }
};



int main()
{
    Stack stack1;
    cout << stack1.top() << endl; // Stack is Empty !!!
    stack1.push(10);
    stack1.push(20);
    stack1.push(30);
    stack1.push(40);
    stack1.push(50);
    stack1.push(60);              // Stack is Full
    cout << stack1.size << endl;  // 5
    cout << stack1.top() << endl; // 50
    stack1.display();             // 10 20 30 40 50
}