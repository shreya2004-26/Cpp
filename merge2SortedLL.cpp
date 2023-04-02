/*here we will be given two linkedLists, we'll have to
which may be sorted or unsorted. Our work is to merge them in a sorted way.

1) 1 -> 4 -> 5 -> x
2) 2 -> 3 -> 5 -> x
result is :- 1 -> 2 -> 3 -> 4 -> 5 -> 5 -> x
*/
Node<int>* solve(Node<int>* first, Node<int>* second){
    
    // if only one element is present in first list
    if(first -> next == NULL){ //is case me pehli list ke next ko entire second list me point karado
        first -> next = second;
        return first;
    }
    Node* curr1 = first; // first list ke first element ko curr1 maan liya
    Node* next1 = curr -> next;//first list ke second element ko next1 maan liya
    Node* curr2 = second; // second list ke first element ko curr2 maan liya
    Node* next2 = curr2 -> next;
    while(next1 != NULL && curr2 != NULL){

        if((curr2 -> data >= curr1 -> data) && (curr2 -> data <= next1 -> data)){
            
            //add node in between the first list
            curr1 -> next = curr2;
            next2 = curr2 -> next;
            curr2 -> next = next1;
            //update pointers
            curr1 = curr2;
            next1 = next2;
        }
        else{
            // curr1 and next1 ko aage badhana padega
            curr1 = curr1 -> next;
            next1 = next1 -> next;

            if(next1 == NULL){
                curr1 -> next = curr2;
                return first;
            }
        }
    }
    return first;
}
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first == NULL) // agar pehli list khaali hai
    return second;

    if(second == NULL) // agar dusri list khaali hai
    return first;

    if(first -> data <= second -> data){
       return solve(first,second);
    }
    else{
       return solve(second,first);
    }
}

//2nd approach

Node* sortedMerge(Node* a, Node* b)  
{  
    Node*head;
    Node*tail;
    if(a==NULL) return b;
    if(b==NULL) return a;
    if(a->data<=b->data)
    {
        head=a;
        tail=a;
        a=a->next;
    }
    else
    
        {
            head=b;
            tail=b;
            b=b->next;
        }
    while(a!=NULL && b!=NULL)
    {
         if(a->data<=b->data)
            {
                tail->next=a;
                tail=tail->next;
                a=a->next;
                
            }
         else
            {
               tail->next=b;
               tail=tail->next;
               b=b->next;
            }
    }
    if(a==NULL)
    {
        tail->next=b;
    }
    else 
    {
        tail->next=a;
    }
    return head;
        
}  