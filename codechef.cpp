#include <iostream>
using namespace std;

int main() {
	int count=0;
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++){
	        if(arr[i] != arr[i+1]){
	            temp = arr[i];
				arr[i]= arr[i+1];
				arr[i+1]=0;
				a
	            count++;
                
				}
	   }
	   cout<<"count here is: "<<count<<endl;
	return 0;
}
