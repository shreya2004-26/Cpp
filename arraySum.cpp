#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements you want to enter: ";
    cin>>n;
    int arr[n];
    int sum = 0;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    cout<<"The sum of the elements entered is: "<<sum;
    return 0;
}
