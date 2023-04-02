#include<iostream>
using namespace std;
int main(){
    int arr[8]={3,2,4,1,6,5,7,8};
    int item;
    cout<<"Enter the item to be searched: ";
    cin>>item;
    for(int i=0;i<8;i++){
        if(arr[i]==item){
            cout<<"The item is present at: "<<i<<endl;   
        }
    }
    cout<<"Not found!";
    return 0;
}