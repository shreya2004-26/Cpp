stack<int> pushAtBottom(stack<int> &myStack, int x){
    solve(myStack, x);
    return myStack;
}

void Solve(stack<int> &s, int x){
    //base case
    if(s.empty()){ //agar stack empty hai to direct element ko push karo aur return karado
        s.push(x);// push the only number given
        return;
    }

    int num=s.top();
    s.pop();

    //recursive call
    solve(stack, x);

    s.push(num);

}