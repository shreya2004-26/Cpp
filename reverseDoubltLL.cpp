Node* reverseList(Node* &head){
    Node* curr = head;
    Node* last = NULL:
    if(head == NULL){
        return;
    }
    while(curr != NULL){
        last = curr;
        curr = curr -> next //traversing through list forwards
    }
    head = last;//set the head as the last element
    while(last != NULL) //traverse through the list backward
    {
        last = last -> prev;//set next to be previous of last
        last = last -> prev;
    }
    return last;
}

//2nd approach

Node* rev(Node* head)
{
    Node* curr = head;
    Node* prev = NULL;
    Node* nextp = NULL;
    
    while(curr)
    {
        nextp = curr->next;
        curr->next = prev;
        curr->prev = nextp;
        prev = curr;
        curr = nextp;
    }
    
    return prev;
}


Node* reverseDLL(Node * head)
{
    //Your code here
    
    
    return rev(head);
    
}

//3rd approach

Node* reverseDLL(Node * head)
{
    if(head == NULL || head->next == NULL){

        return head;

    }

    Node*pre = NULL;

    Node*curr = head;

    Node*next;

  while(curr != NULL){

         next = curr->next;

         curr->next = pre;

         pre = curr;

         curr->prev = next;

         curr = next;
     }
return pre;
}

//4th approach
Node* reverseDLL(Node * head)
{
    //Your code here
    Node * pre = NULL;
    Node *cur = head;
    
    
 while (cur != NULL) {
        pre = cur->prev;
        cur->prev = cur->next;
        cur->next = pre;
        cur = cur->prev;
    }
     if (pre != NULL)
        head = pre->prev;
    return  head;
}