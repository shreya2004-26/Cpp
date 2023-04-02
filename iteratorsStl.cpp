#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {2,3,5,6,7};
    for(int i = 0; i<v.size(); ++i){
        cout << v[i] << " ";
    }
    cout<<endl;
    vector<int> ::iterator it;
    for(it = v.begin(); it != v.end(); ++it){
        cout<<(*it) <<" ";
    }
    cout<< endl;

    /*vector<pair<int,int>>v_p = {{1,2},{2,3},{3,4},{4,5}};
    vector<pair<int,int>>::iterator it;
    for(it=v_p.begin(); it!=v_p.end(); ++it){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    for(it=v_p.begin(); it!=v_p.end(); ++it){
        cout<<(it->first)<<" "<<(*it).second<<endl;
    }
    */


  /* for(int &value : v){
    value++;
   // cout<< value <<" ";
   }
   for(int value : v){
    cout<<value << " ";
   }
   cout<<endl;  */

   for(auto it = v.begin(); it != v.end(); ++it){
    cout<< (*it) <<" ";
   }
   cout<< endl;

   vector<pair<int,int> >v_p={{1,2},{2,3}};
   for(auto &value: v_p){
    cout<<value.first <<" " <<value.second <<endl;
   }

   //yaha par auto a ki value ko float assume karlega

   auto a = 1.0;
   cout << a << endl;
    
}