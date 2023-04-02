#include<iostream>
#include<map>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //consructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~Node(){
        int value = this -> data;
        //memory free
        if(this -> next != NULL){ // this is for pointing to current variable
            delete next;
            this -> next = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};

void insertAtHead(Node* &head, int d){
        Node* temp = new Node();
        temp -> next = head; // here it shows that the "temp ka next", 
        //which is right now pointing to null, should now point to head which is next node.
        head = temp; // now head shifts to temp which becomes the starting node. 
        // yahan temp ko phir head maan liya.
}

void insertAtTail(Node* &tail, int d){
        Node* temp = new Node();
        tail -> next = temp; 
        tail = temp; // temp ko tail maan liya.
        
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){
//insert at start
    if(position == 1){ // This is used because if we want to insert something at first position.
        insertAtHead(head,d);
        return;
    }

    if(temp -> next == NULL){
        insertAtTail(tail,d);
        return;
    }

    Node* temp = head; // temp ko head me assign kar diya hai.
    int cnt = 1; // sabse pehle hum count=1, yani first positon par hain.
    while(cnt < position - 1){
        temp = temp -> next;
        cnt++;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d); // naya node create kiya nodeToInsert ke naam se.
    nodeToInsert -> next = temp -> next;  // for inserting nodeTOInsert after temp, we
    // are forst required to first point the nodetoinsert ka next in temp ka next which refers to the next node of temp.
    temp -> next = nodeToInsert; // as temp ka next ka address part nodetoinsert ko point karega.
}

void print(Node* &head){
        Node* temp = head; // head ko temp maan liya.
        while(temp != NULL){ // agar temp null nahi hai
            cout<< temp -> data <<endl; // temp ko aage badhate jaayenge aur print karate jaayenge
            temp = temp -> next;
        }
    cout<<endl;
}

void deleteNode(Node* &head, int position){
    //deleting first node or start node
    if(position == 1){  // position 1 se start karenge chalna jo ki head node hoga
        Node* temp = head; // first node ko temp maan liya
        head = head -> next; // head ko aage badha denge
        //memory free kardo start node ka
        temp -> next = NULL: // aur phir temp ki memeory ko free kar denge
        delete temp;
    }
    else{
       //middle ya last node delete karna ho to
       Node* curr = head; // head ko curr maan lenge
       Node* prev = NULL; // prev already null hai

       int cnt = 1; // pehle node se hi to chalna start karenge na
       while(cnt < position){ // uss position tak jaayenge jisko delete karna hai
        prev = curr; // sabse pehle curr ko prev maan lenge
        curr = curr -> next;// phir curr ko badhate jaayenge
        cnt++;
       }

       prev -> next = curr -> next;// curr vo node hai jisko delete karna hai, to uske next me prev ke next ko point kara denge
       curr -> next = NULL; // phir curr ki memory ko free kar denge
       delete curr;// phir delete kar denge
       
    }


    
    
}

int main(){
    //create a new node
    Node* node1 = new Node(15);


    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtHead(head,16);
    print(head);

    insertAtTail(tail,12);
    print(head);

    insertAtTail(tail,19);
    print(head);

    insertAtPosition(tail,head,3,22);
    print(head);

    cout<<"Head "<<head -> data<<endl;
    cout<<"Tail "<<tail -> data<<endl;

    deleteNode(3, head);
    print(head);

    return 0;

}

// QQQQ :- during the deletion of last node handle tail.
