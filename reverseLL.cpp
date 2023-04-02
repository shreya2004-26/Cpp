//iterative opproach

Node* reverseLinkedList(Node* head){
    //if LL is either empty or has one node
    if(head == NULL || head -> next == NULL){
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL; //yaha par first node ke baad jitne bhi nodes bache hain 
    //unhe forward pointer me store karwa de.
    
    while(curr != NULL){
        forward = curr -> next;
        curr -> next = prev;//from here it's pointing in reverse direction.
        prev = curr;
        curr = forward;
    }
    return prev;
}

//recursive approach

void reverse(Node* &head, Node* curr, Node* prev){
    //base case
    if(curr == NULL){//it means last me pohoch chuke hain.
    head = prev;
    return;
         }
    Node* forward = curr -> next;
    reverse(head, forward, curr);
    curr -> next = prev;
}
Node* reverseLinkedList(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    reverse(head, curr, prev)
    return head;
}

// approach - 2 recursive

Node* reverse1(Node* head){
    //base case
    if(head == NULL || head -> next == NULL){
        return head;
    }

    Node* chotaHead = reverse1(head -> next) //first node ke alawa baaki ke jitne nodes bache unke head ko chhotahead assume kar liya
    head -> next -> next = head;//phir 2nd node ko head ko point karwaya jo ki first node hai.
    head -> next = NULL; // first node jo ki head hai usko null ko point karwaya.
    return chotaHead;
}
