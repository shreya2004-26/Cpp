#include<iostream>
using namespace std;
int main(){
//     int arr[5]={3,6,2,4,7};
//     int i,ptr,temp;
//     for(int i=1;i<5;i++){
//         temp=arr[i];
//         ptr=i-1;
//         while(temp<arr[ptr] && ptr!=-1){
//             arr[ptr+1]=arr[ptr];
//             ptr=ptr-1;
//         }
//         arr[ptr+1]=temp;
//     }
//     return 0;
// }

int arr[5]={4,3,6,5,7};
int temp;
for(int i=1;i<5;i++){
     if(arr[i]>arr[i-1]){
        temp=arr[i];
        arr[i-1]=arr[i];
     }
     cout<<arr[i]<<" ";
}
}