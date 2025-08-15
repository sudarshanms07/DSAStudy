#include<bits/stdc++.h>
using namespace std;

bool is_prime(int num){
   for(int i=2;i<num;i++){
    if(num%i==0){
        return false;}
    }
    return true;
}

int main(){
    int n,m;
    cin>>n>>m;

  for(int i=n;i=m;i++){
        if(is_prime(i)){
            cout<<i<<endl;
        } 
    } 
}
