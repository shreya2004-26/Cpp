void insertAtBottom(stack<int> &stack){

}

void reverseStack(stack<int> &stack){
    //base case
    if(stack.empty()){
        return;
    }

    int num = stack.top();
    stack.pop();

    //recursive call
    reverseStack(stack);

    insertAtBottom(stack,num);
}