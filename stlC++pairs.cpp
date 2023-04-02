#include<iostream>
using namespace std;

int main(){
    pair<int,string>p;//declaration of pair
    // pair are those which contain two types of datatypes
   // p = make_pair(2,"abc");//initialization of pair
    p = {2, "abc"};// another way of initialization
    //pair<int,string>p1 = p;// here i am passing it as a value so, it did not get copied
    pair<int,string> &p1 = p;// here i am passing it as a reference so the copy of variable got created
    p1.first = 3;
    cout<<p.first<<" "<<p.second<<endl;
    int a[] = {1,2,3};
    int b[] = {2,3,4};
    pair<int,int> p_array[3];// pair of array declaration
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};
    swap(p_array[0],p_array[2]);
    for(int i = 0; i < 3 ; ++i){
        cout<< p_array[i].first <<" " <<p_array[i].second<<endl;
    }

    /* for taking user input.
    int main(){
        pair<int,string>p;
        cin>>p.first;
        cout<<p.second;
    }
    */
}