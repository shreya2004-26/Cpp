#include<iostream>
using namespace std;
int main(){
    char str[]={"MACHADENGE"};
    int i;
    for( i=0;str[i]!='\0';i++){
        str[i]=str[i]+32;
    }
    cout<<str[i];
    return 0;
}