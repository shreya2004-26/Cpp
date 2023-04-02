#include<iostream>
using namespace std;
int fib(int num){
    int fib1=0;
    int fib2=1;
    int fib3=0;
    for(int i=2;i<=num;i++){
        fib2=fib1;
        fib3=fib2;
        fib3=fib1+fib2;
    }
    return fib3;
}
int main(){
    int m,n,x;
    cout<<"The fibonacci series is:"<<fib(6);
    return 0;
}