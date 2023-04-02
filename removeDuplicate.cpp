Node* removeDuplicates(Node* head){

    //empty List
    if(head == NULL)
    return NULL;

    //non empty List
    Node* curr = head;

    while(curr != NULL){

        if((curr -> next != NULL) && curr -> data == curr -> next -> data){
            Node* next_next = curr -> next -> next; //duplicate element hone ki wajah se use skip maarke curr ke next ke next me ja rhe
            Node* nodeToDelete = curr -> next; // 
            delete(NodeToDelete);
            curr -> next = next_next;
        }
        else // not equal
        {
            curr = curr -> next;
        }
    }
    return head;
}