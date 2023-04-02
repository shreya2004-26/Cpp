#include <iostream>
#include <stack>
using namespace std;

class Stack
{

    // properties
public:
    int *arr; /*here array can be declared in form of pointers too because
     array is considered to be a pointer because array stores address of values in 
     same way as pointers*/
    int top;
    int size;

    // behavior
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;// matlab array khaali hai
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)//array me at least ek element to hai
            return arr[top];
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if(top == -1){ //iska matlab array khaali hai
            return true;
        }
        else{
            return false;
        }

    }
};
int main(){
  
  Stack st(5); // declaration of object of Stack class and declared its size.

  st.push(22);//calling functions of class using the object and inserting elements.
  st.push(43);
  st.push(44);

  cout<< st.peek() <<endl; //printing the top element

  st.pop();
  cout<< st.peek() << endl;

  st.pop();
  cout<< st.peek() << endl;

  st.pop();
  cout<< st.peek() << endl;

  if(st.isEmpty()){
    cout<< "Stack is empty mere dost" <<endl;
  }
  else{
    cout<< "Stack is not empty mere dost" <<endl;
  }
    
/*
    //creation of stack
    stack<int> s;

    //push operation
    s.push(2); // when we push this element, this element goes to the bottom
    s.push(3); // this is now here the top element

    //pop
    s.pop(); // when we pop, the element from the top gets pop

    cout<< "Printing top element " << s.top() <<endl;

    if(s.empty()){
        cout<<"Stack is empty " << endl;
    }
    else{
        cout<<"stack is not empty " << endl;
    }

    cout<< "size of stack is " <<s.size();
    return 0;

*/
}