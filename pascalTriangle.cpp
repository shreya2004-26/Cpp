#include<iostream>
using namespace std;
int pascalTriangle(int m){
    int fact = 1;
    for(int i=2;i<=m;i++){
         fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<pascalTriangle(i)/(pascalTriangle(i)*pascalTriangle(i-1));
        }cout<<endl;
    }
    return 0;
}