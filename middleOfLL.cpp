//first approach

int getLength(Node* head){

    int len = 0;
    while(head != NULL){
        len++;
        head = head -> next;
    }
    return len;
}

Node* findMidlle(Node* head){
    int len = getLength(head);
    int ans = (len/2);

    Node* temp = head;
    int cnt = 0;
    while(cnt < ans){
        temp = temp -> next;
        cnt++;
    }
    return temp;
}

/* 2nd approach (slow and fast pointer approach)
1) slow pointer vo hota hai jo same time me fast me aadha distance cover 
karta hai.
2) fast pointer vo hota hai jo same time me slow se two times distance
cover karta hai.
*/

Node* getMiddle(Node* head){
    if(head == NULL || head -> next == NULL){
         return head;
    }

    //2 nodes - neede or not?
    /* Ans:- ofcourse this step is needed because when there are
    only two nodes, in that case jab loop run karega to length/2 
    tak jaayega aur length/2 ki value 1 hogi. To head pointer dusre 
    node par chala jayega aur wahi apna ans hoga uss case me.
    so, this case can be handled simply before only.
    */
   if(head -> next -> next == NULL){
    return head -> next;
   }

   Node* slow = head;
   Node* fast = head -> next;

   while(fast != NULL){
    fast = fast -> next;
    if(fast != NULL){
        fast = fast -> next;
    }
    slow = slow -> next;
   }
   return slow;
}

Node* findMiddle(Node* head){
    return getMiddle(head);
}