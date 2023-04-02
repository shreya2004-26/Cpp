#include<iostream>
using namespace std;
int main(){
    int arr[8]={2,6,4,3,5,7,8,1};
    int item=4;
    int l,h;
    int mid = (l+h)/2;
    while(l<=h){
    if(arr[mid]==item){
        cout<<"Found at->"<<mid+1;
        break;
    } 
    else if(item>arr[mid]){
        l=mid+1;
    }
    else{
        l=mid-1;
    }
}
cout<<"Element not found!";
}