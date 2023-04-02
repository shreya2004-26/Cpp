#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1 || n==2){
        return 1;
    }
    else
       return (fib(n-1)+fib(n-2));
}

int main(){
    int num;
    cout<<"The fibonacci series of given number n is: ";
    for(int i=0;i<5;i++){
        cout<<fib(i)<<" ";
    }
    return 0;
}