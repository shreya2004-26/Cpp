bool isValidParenthesis(string expression){
    stack<char> s;
    for(int i=0; i<expression.length; i++){

        char ch = expression[i];

        //if opening bracket, stack push
        //if close bracket, stacktop check and pop

        if(ch == '(' || ch == '{' || ch == '['){
            s.push(ch);
        }
        else{
            
            //for closing bracket
            if(!s.empty()){
                char top = s.top();
                if(matches(top,ch)){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else
        }


    }
}