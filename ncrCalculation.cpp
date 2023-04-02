#include<iostream>
using namespace std;
int ncrCalculation(int m){
    int fact = 1;
    for(int i=2;i<=m;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n,r;
    cin>>n>>r;
    int ans = ncrCalculation(n)/ncrCalculation(r)*ncrCalculation(n-r);
    cout<<"The ncr value obtained is:"<<ans;
    return 0;
}