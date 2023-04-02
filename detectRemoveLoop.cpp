//detext loop:--

bool detectLoop(Node* head){

    if(head == NULL){
        return false;
    }

    map<Node*, bool> visited;

    Node* temp = head;

    while(temp != NULL){

        //cycle is present
        if(visited[temp] == true){
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;

    return false;
    }
}

//FloydDetectionLoop

Node* floydDetectLoop(Node* head){

    if(head == NULL)
       return false;
    
    Node* slow = head; //ek pointer assume kiya slow jisko head par bithaya hai
    Node* fast = head; // ek pointer assume kiya fast jisko bhi same head par bithaya hai

    while(slow != NULL && fast != NULL){

        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast){
            return slow;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head){

    if(head == NULL)
    return NULL;

    Node* intersection = floydDetectLoop(head);

    if(intersection == NULL)
    return NULL;

    Node* slow = head;

    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;
}

void removeLoop(Node* head){

    if(head == NULL)
    return NULL:;

    Node* startOfLoop = getStartingNode(head); // yaha se starting node ko startofloop me store kara liya
    
    if(startOfLoop == NULL)
    return head;
    
    Node* temp = startOfLoop;

    while(temp -> next != startOfLoop){
        temp = temp -> next; // ye tabtak karna hai jabtak startofloop na mila jaaye
    }
    temp -> next = NULL; // aur jaise hi mil jaaye loop se bahar aa jaaye aur temp -> next ko null kar de
}

