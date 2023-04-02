#include<iostream>
using namespace std;
int factorial(int num){
    int fact = 1;
    for(int i=num;i>=2;i--){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    cout<<"The factorial of the number is:"<<factorial(4);
    return 0;
}