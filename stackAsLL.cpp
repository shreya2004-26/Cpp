#include<iostream>
#include<stack>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

Node(int data){
    this -> data = data;
    this -> next = NULL;
}
};
class Stack {
    Node* top;

    public:
    Stack(int size) { 
    this -> size = size;
    top = NULL; }

void push( int data){
    Node* temp = new Node(data);
    if(size - top > 1){
        
    }
    temp -> next = head;
    head = temp;
}

void pop(){
    if(head == NULL){
        return;
    }
    Node* temp = head;
    head = head -> next;
    temp -> next = NULL;
    delete(temp);
}

void peek(){
    if(head == NULL){
        return;
    }
    return head -> data;
}

void display(){
    Node* temp = head;
    while(temp != NULL){
        temp = temp -> next;
        return temp -> data;
    }
}
};

int main(){
    Stack st(19);
    cout<< st.peek() <<endl;
    return 0;
}


