#include <bits/stdc++.h>
using namespace std;

void print(map<int, string> &m)
{
  cout << m.size() << endl;
  for (auto &pr : m)
  {
    cout << pr.first << " " << pr.second << endl;
  }
}

int main()
{
  map<int, string> m;
  m[1] = "abc";
  m[5] = "cdc";
  m[3] = "acd";
  m[6] = "a";
  m[5] = "cde";
  auto it = m.find(7); //O(log(n))
  if(it != m.end())
      m.erase(it); //log(n)
      
 // m.insert({4, "afg"});
  print(m);
  /*map<int,string> :: iterator it;
    for(it = m.begin(); it != m.end(); ++it){
        cout<< (*it).first <<" " << (*it).second<<endl;
    }
  */
  /*
     //we can do the above step like this also
     for(auto &pr : m){
      cout << pr.first <<" " << pr.second << endl;
     }
     */
}