#include<iostream>
using namespace std;
int main(){
    int arr[5]={3,5,4,6,2};
    int i,j,cn,temp;
    for(int i=0;i<4;i++){
        cn=i;
        for(int j=i+1;j<5;j++){
            if(arr[cn]>arr[j]){
                cn=j;// sabse pehle cn ki value 1 hogi
                temp=arr[cn];
                arr[cn]=arr[i];
                arr[i]=temp;
            }
        }
        cout<<temp<<" ";
 }
 return 0;
}