#include<iostream>
using namespace std;
int main(){
    char s[10]={'s','i','n','g','h','\0'};
    for(int i=0;s[i]!='\0';i++){
        cout<<s[i];
    }
    return 0;
}