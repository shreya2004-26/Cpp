#include<iostream>
using namespace std;

int main(){
        pair<int,string>p;
        p={2,"abc"};
        pair<int,string> &p1 = p;
        p1.first=3;
        cout<<p.first<<" "<<p.second<<endl;
        cout<<p1.first<<" "<<p1.second;
        return 0;
        
        }