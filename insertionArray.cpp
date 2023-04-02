#include<iostream>
using namespace std;
int main(){
    int arr[100];
    char choice;
    int i=0;
    do{
    cout<<"Enter the "<< i+1 <<" element: ";
    cin>>arr[i];
    cout<<"Do you want to enter again(press Y): ";
    cin>>choice;
    }
    while(choice == 'Y' || choice == 'y');
    cin>>choice;
    cout<<"The elements are: ";
    for(int k=0;k<i;k++){
        cout<<arr[k];
    }
    return 0; 
}