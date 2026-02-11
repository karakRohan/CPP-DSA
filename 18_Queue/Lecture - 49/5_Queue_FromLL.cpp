#include<bits/stdc++.h>
using namespace std;

class Node{ // User Type Data Type
public:
    int val;
    Node* next;
    Node(int val){
        this -> val = val;
        this->next = NULL;
    }
};

class Queue{ // User Defined Data Structure
public:
    Node* head;
    Node* tail;
    int s; // s = size
    Queue(){
        head = tail = NULL;
        s = 0;
    }
    void push(int val){
        Node* temp = new Node(val);
        if(s==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        s++;
    }
    void pop(){
        if(s==0){
            cout<<"Queue is Empty!"<< endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        s--;
        delete(temp); // Wastage nehi ho rahi
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

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    int size(){
        return s;
    }
    bool empty(){
        if(s==0) return true;
        else return false;
    }
};

int main(){
    Queue q;
    // Push, Pop, Front, Back, Size, Empty
    q.pop(); // Queue is Empty!
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    q.push(60);
    q.display();
    cout<<"Front: "<<q.front()<<endl;
    cout<<"Back: "<<q.back()<<endl;
    q.pop();
    q.pop();
    q.display();
    cout<<"Front: "<<q.front()<<endl;
    cout<<"Back: "<<q.back()<<endl;
}