// if k=2, two nodes are taken and process is done 
// on those two. Except on all nodes, recursive call is done.

Node* kReverse(Node* head,int k){

    //base call
    if(head == NULL){
        return NULL;
    }

    //step 1: reverse k nodes (firstly)
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;

    while(curr != NULL && count < k){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    //step2: recursion dekh lega aage ka
    if(next != NULL){
        head -> next = kReverse(next,k); //2nd node ke baad ka hai ye
        // yaani 2nd node ke baad recursion khud dekh lega as k=2
    }

    //step3: return head of reverse list
    return prev;
}