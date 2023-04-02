#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory is free for node with data: "<<value<<endl;
    }
};

/*circular linkedList me head node ki zarurat nhi hoti, 
sirf ek node use karte hai tail* node last node ke liye 
aur tail->next karke first node ka pata laga lete hain because the list is circular.
*/ 

/* Yaha par koi bhi node agar kahi point kar raha hoga to usko pehle
ek forward* variable me store karenge. But bina ye kiye bhi solve ho sakta hai ;))
*/

void insertNode(Node* &tail, int element, int d){

    //empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{

        //non-empty list
        //assuming that element is present in the list

        Node* curr = tail;

        while(curr -> data != element){
            curr = curr -> next;
        }

        //element found -> curr is representing element wala node
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void print(Node* tail){
    Node* temp = tail;

    //empty list...
    if(tail == NULL){
        cout<< "List is empty "<<endl;
        return;
    }

    do{
        cout<< tail -> data << " ";
        tail = tail -> next;
    }
    while(tail != temp);
    cout<<endl;
}

void deleteNode(Node* &tail, int value){

    //empty list
    if(tail == NULL){
        cout<< " List is empty, please check again" << endl;
        return;
    }

    else{
        //non-empty

        //assuming that  "value " is present in the linked list
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value){
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        // 1 Node linkedList
        if(curr == prev){
            tail = NULL;
        }
        // >=2 Node LinkedList
        else if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}

 bool isCircular(Node *head)
{
   if(head == NULL){
       return true;
   }
   Node* temp = head -> next;
   while(temp != NULL && temp != head)
            temp = temp -> next;
            return (temp == head);
}

bool isCircularList(Node* head){
    //empty list
    if(head == NULL){
        return true;
    }
    Node* temp = head -> next;
    while(temp != NULL && temp != head){
        temp = temp -> next;
    }

    if(temp == head){
        return true;
    }
    return false;
}

int main(){

    Node* tail = NULL;

    insertNode(tail,2,3); // 3 ki ek node create karo
    print(tail);

    insertNode(tail, 3,5);
    print(tail);

 /*   insertNode(tail, 3, 5); // list me node dhundho 3 aur phir uske baad 5 ko insert karo
    print(tail);
    
    insertNode(tail, 5, 7); // list me node dhundho 5 aur phir uske baad 7 ko insert karo
    print(tail);

    insertNode(tail, 7, 10); // list me node dhundho 5 aur phir uske baad 7 ko insert karo
    print(tail);

    insertNode(tail, 5, 6);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);

   // deleteNode(tail, 3);
    //print(tail);

   // deleteNode(tail, 10);
    //print(tail);

    deleteNode(tail, 6);
    print(tail);
*/
    // deleteNode(tail, 3);
    //print(tail);

    if(isCircularList(tail)){
        cout<<"curcular"<<endl;
    }
    else{
        cout<<"not curcular"<<endl;
    }
    return 0;

}