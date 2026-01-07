#include<bits/stdc++.h>
using namespace std;

class Node{ // DoublyLL Node
public:
    int val;
    Node* next;
    Node* prev; // Extra For DoublyLL
    Node(int val){
        this -> val = val;
        this->next = NULL;
        this-> prev = NULL; //Extra For DoublyLL
    }
};



class DLL{ // User Defined Data Structure
public:
    Node* head;
    Node* tail;
    int size;
    DLL(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail; // Extra
            tail = temp;
        }
        size++;
    }

    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head->prev = temp; // maintain prev pointer for doubly linked list
            head = temp;
        }
        size++;
    }

    void insertAtidx(int idx,int val){
        if(idx<0 || idx>size) cout<<"Invalid Index"<<endl;
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtTail(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=1;i<idx;i++){
                temp = temp -> next;
            } 
            t -> next = temp -> next;
            temp -> next = t;
            t->prev = temp; // Extra
            t->next->prev = t; // Extra
            size++;
        }
    }

    void deleteAtHead(){
        if(size==0){
            cout<<"Linked List is Empty!";
            return;
        }
        head = head->next;
        if(head) head->prev = NULL; // Extra
        if(head==NULL) tail = NULL; // Also Extra
        size--;
    }

    void deleteAtTail(){
        if(size==0){
            cout<<"Linked List is Empty!";
            return;
        }
        else if(size==1){ // Extra   
            deleteAtHead();
            return;
        }
        // Node* temp = head;
        // while(temp -> next != tail){
        //     temp = temp -> next;
        // }
        // temp -> next = NULL;
        // tail = temp;
        Node* temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--;
    }

    void deleteAtidx(int idx){
        if(size==0){
            cout<<"Linked List is Empty!";
            return;
        }
        else if(idx<0 || idx>=size){
            cout<<"Invalid Index !!!";
            return;
        }
        else if(idx==0) return deleteAtHead();
        else if(idx==size-1) return deleteAtTail();
        else{
            Node* temp = head;
            for(int i=1;i<idx;i++){
                temp = temp -> next;
            }
            temp->next = temp->next->next;
            temp->next->prev = temp; // Extra
            size--;
        }
    }

    int getAtidx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index";
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            if(idx<size/2){
            Node* temp = head;
            for(int i=1;i<=idx;i++){
                temp = temp -> next;
            }
            return temp -> val;
            }
            else{ // idx > size/2
                Node* temp = tail;
                int steps = (size - 1) - idx;
                for(int i=0;i<steps;i++){
                    temp = temp -> prev;
                }
                return temp -> val;
            }
        }
    }

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    DLL list;
    list.insertAtTail(10);  
    list.insertAtTail(20);  
    list.insertAtTail(30);   
    list.display(); // 10 20 30
    list.insertAtHead(40);
    list.display(); // 40 
    list.insertAtHead(50);
    list.display(); // 50 
    list.insertAtidx(2,60);
    list.display(); // 50 60 40 10 20 30
    list.deleteAtTail();
    list.display(); // 50 60 40 10 20
    list.deleteAtHead();
    list.display(); // 60 40 10 20
    list.insertAtTail(90);
    list.display(); // 60 40 10 20 90
    // list.deleteAtidx(3);
    list.display(); // 60 40 10 90
    list.insertAtTail(40);
    list.insertAtTail(50);
    list.display(); // 60 40 10 90 40 50
    cout<<list.getAtidx(4)<<endl; // 40
}   