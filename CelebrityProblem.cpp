class Solution{
    private:
    bool knows(vector<vector<int>>&M, int a, int b){
        if(M[a][b] == 1)
        return true;
        else
        return false;
    }


    public:
    //function to find if there is any celebrity in the party or not
    int celebrity(vector<vector<int>> & M, int n){
       stack<int> s;
       //step 1: push all element in stack
       for(int i=0; i<n; i++){
        s.push(i); //sare given elements ko stack me push kar diya
       }

       //step2:

       while(s.size() > 1){

        int a = s.top();//top se pehle element ko pop kar liya
        s.pop();

        int b = s.top();//top se dusre element ko pop kar liya
        s.pop();

        if(knows(M,a,b,n)){ //yaha par compare kara rahe ki a b ko jaanta hai ya nahi
            s.push(b);  // agar a,b ko jaanta hai to a ko discard kar denge and b ko push kar denge
        }
        else{
            s.push(a); // nhi to a ko push kar denge
        }
       }
       int candidate = s.top();

       //step 3: single element in stack is potential celebrity
       //so verify it

       int zeroCount = 0;

       for(int i=0; i<n; i++){
        if(M[candidate][i] == 0)
           zeroCount++;
       }

       //all zeroes
       if(zeroCount != n)
       return -1;

       //column check
       int oneCount = 0;

       for(int i=0; i<n; i++){
        if(M[i][candidate] == 1)
            oneCount++;
       }

       if(oneCount != n-1){
        return -1;
       }

       return ans;
    }
}