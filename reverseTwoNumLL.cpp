private:
Node* reverse(Node* head){

    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;

    while(curr != NULL){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void insertAtTail(struct Node* &head, struct Node* &tail){

    Node* temp = new Node(val);
    //empty list
    if(head == NULL){
        head = temp;
        tail = temp;
        return;
    }
    else{
        tail -> next = temp;
        tail = temp;
    }
}

struct Node* add(struct Node* first, struct Node* second){
    int ans = 0;
    Node* ansHead = NULL;
    Node* ansTail = NULL;

    while(first != NULL && second != NULL){
        int sum = carry + first -> data + second -> data;
        int digit = sum%10;

        // create node and add in answer Linked List
        insertAtTail(ansHead, ansTail, digit);
        carry = sum/10;
    }

    while(first != NULL){
        int sum = carry + second -> data;
        int digit = sum%10;
        //create node and add in answer linked list
        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;
    }

    while(second != NULL){
        int sum = carry + first -> data;
        int digit = sum%10;
        //create node and add in answer linked list
        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;
    }

    while(carry != 0){
        int sum = carry;
        int digit = sum%10;
        //create node and add in answer linked list
        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;
    }

return ansHead;


}

public:
//functions to add two numbers represented by linkedlists
struct Node* addTwoLists(struct Node* first, struct Node* second){
    
    //step 1 - reverse input LL
    first = reverse(first);
    second = reverse(second);

    //step2 - add 2 LL
    Node* ans = add(first,second);

    //step 3
    ans = reverse(ans);

    return ans;
}

//second approach:::::------

Node* reverse(Node* n){
    
    Node* prev = NULL;
    Node* tmp = NULL;
    while(n){
        tmp = n->next;
        n->next = prev;
        prev = n;
        n = tmp;
    }
    return prev;
}


class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first = reverse(first);
        second = reverse(second);
        int extra = 0;
        Node* answer = new Node(0);
        Node* ans = answer;
        while(first||second){
            if(first){
                extra += first->data;
                first = first->next;
            }
            if(second){
                extra += second->data;
                second = second->next;
            }
            if(extra>=10){
                answer -> next = new Node(extra%10);
                answer = answer->next;
                extra = 1;
            }
            else{
                answer -> next = new Node(extra);
                answer = answer->next;
                extra = 0;
            }
        }
        if(extra>0){
            answer -> next = new Node(extra);
        }
        return reverse(ans->next);
        // code here
    }
};