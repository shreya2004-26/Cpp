#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n+1];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num,pos;
    cout<<"Enter the number and position to be deleted: ";
    cin>>num>>pos;
    for(int i=pos;i<n;i++){
        arr[i]=arr[i+1];
    }
    cout<<"The new array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}