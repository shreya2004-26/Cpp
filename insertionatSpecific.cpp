#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num,pos,i;
    cout<<"Enter the number and position: ";
    cin>>num>>pos;
    for(int i=4;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=num;
    cout<<"new elements are: ";
    for(int i=0;i<=5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}