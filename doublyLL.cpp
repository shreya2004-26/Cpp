#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }

    ~Node(){
        int val = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<< "memory free for node woth data "<< val;
    }
};
void print (Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int getLength(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}

void insertAtHead(Node* &head, int d){

    // empty list
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
    }
    else{
    Node* temp = new Node(d);
    temp -> next = head; // temp ka next head ko point kar rha
    head -> prev = temp;
    head = temp;
  }
}

void insertAtTail(Node* &tail, int d){

    // empty list
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;

    }
    else{
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}
}
void insertAtPosition(Node* &tail, Node* &head, int position, int d){

    //insert at start
    if(position == 1){ // This is used because if we want to insert something at first position.
        insertAtHead(head,d);
        return;
    }

    Node* temp = head; // temp ko head me assign kar diya hai.
    int cnt = 1; // sabse pehle hum count=1, yani first positon par hain.
    
    while(cnt < position - 1){
        temp = temp -> next;
        cnt++;
    }

    // insert at last position
    if(temp -> next == NULL){
        insertAtTail(tail,d);
        return;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

void deleteNode(int position, Node* &head){

    //deleting first node or last node
    if(position == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{

        // deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        
        delete curr;
    }
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);
    //cout<< getLength(head) <<endl;

    insertAtHead(head, 11);
    print(head);

    insertAtHead(head, 13);
    print(head);

    insertAtHead(head, 15);
    print(head);

    insertAtTail(tail, 25);
    print(head);

    insertAtPosition(tail, head, 2, 100);
    print(head);

    insertAtPosition(tail, head, 1, 101);
    print(head);

    deleteNode(1,head);
    print(head);

    return 0;
}