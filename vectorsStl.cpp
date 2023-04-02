#include<iostream>
#include<vector>
using namespace std;

//void printVec(vector<int> &v)
void printVec(vector<string> &v){
    cout<<"size: "<< v.size() <<endl;
    for(int i=0; i<v.size(); ++i){
        //v.size() -> O(1)
        cout<< v[i] <<" ";
    }
   // v.push_back(2);
    cout<< endl;
}

int main(){
   /* vector<int> v;
    int n;
    cin>>n;  
    for(int i = 0; i < n; ++i){
        int x;
        cin>>x;
        printVec(v);
        v.push_back(x);
    }
    printVec(v);
    */
/*
   vector<int> v(10, 3);
   v.push_back(7);
   printVec(v);
   */


  /* vector<int>v;
   v.push_back(7);
   v.push_back(6);
   v.push_back(5);
   printVec(v); // O(1)

   v.pop_back();
   printVec(v);

   v.pop_back();
   printVec(v); // O(1)
   vector<int> v2 = v;
   */

  /*vector<int> v;
  v.push_back(7);
  v.push_back(6);

  vector<int> v2 = v; //O(n)
  v2.push_back(5);
  printVec(v);
  printVec(v);
  printVec(v2); */

  vector<string> v;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    string s;
    cin>>s;
    v.push_back(s);
  }
  printVec(v);

}