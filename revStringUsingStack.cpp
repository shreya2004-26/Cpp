#include<iostream>
#include<stack>
using namespace std;

int main(){
    string str = "shreya";
    stack<char>s;

    for(int i=0;i<str.length();i++){
        char ch = str[i];
        s.push(ch);
    }
}