#include<iostream>
using namespace std;
int print(int num){
    cout<<num<<endl;
}
int addtwo(int num1,int num2){
    print(num1);
    print(num2);
    int sum=num1+num2;
    return sum;
}
int main(){
    int x,y;
    cout<<"The summation is: "<<addtwo(3,4);
}