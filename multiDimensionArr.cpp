#include<iostream>
using namespace std;

int main(){
    int x[3][4]={{0,1},{2,3},{4,5}};
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            
            cout<<x[i][j]<<endl;
        }
        cout<<endl;
    }
   return 0;
}