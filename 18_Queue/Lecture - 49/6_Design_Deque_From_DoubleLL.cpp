#include <bits/stdc++.h>
using namespace std;

class Node
{ // DoublyLL Node
public:
    int val;
    Node *next;
    Node *prev; // Extra For DoublyLL
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL; // Extra For DoublyLL
    }
};

class Deque
{ // User Defined Data Structure
public:
    Node *head;
    Node *tail;
    int s; // s = size
    Deque()
    {
        head = tail = NULL;
        s = 0;
    }
    void pushBack(int val)
    {
        Node *temp = new Node(val);
        if (s == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            temp->prev = tail; // Extra
            tail = temp;
        }
        s++;
    }

    void pushFront(int val)
    {
        Node *temp = new Node(val);
        if (s == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head->prev = temp; // maintain prev pointer for doubly linked list
            head = temp;
        }
        s++;
    }

    void popFront()
    {
        if (s == 0)
        {
            cout << "Linked List is Empty!";
            return;
        }
        head = head->next;
        if (head)
            head->prev = NULL; // Extra
        if (head == NULL)
            tail = NULL; // Also Extra
        s--;
    }

    void popBack()
    {
        if (s == 0)
        {
            cout << "Linked List is Empty!";
            return;
        }
        else if (s == 1)
        { // Extra
            popFront();
            return;
        }
        Node *temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        s--;
    }
    int front(){
        if(s==0){
            cout<<"Queue is Empty!" <<endl;
            return -1;
        }
        return head->val;
    }
    int back(){
        if(s==0){
            cout<<"Queue is Empty!" <<endl;
            return -1;
        }
        return tail->val;
    }
    int size(){
        return s;
    }
    bool empty(){
        if(s==0) return true;
        else return false;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){
    Deque dq;   
    dq.pushBack(10);
    dq.pushBack(20);
    dq.pushFront(5);
    dq.pushFront(1);
    dq.display(); // 1 5 10 20
    cout<<dq.front()<<endl; // 1
    cout<<dq.back()<<endl; // 20
    dq.popFront();
    dq.display(); // 5 10 20
    dq.popBack();
    dq.display(); // 5 10
}