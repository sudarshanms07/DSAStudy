#include <iostream>
using namespace std;

int pow(int p,int q){
    if(q==0) return 1;
    return p*pow(p,q-1);
}

int main(){
    int p,q;
    cout<<"enter number and its power=";
    cin>>p>>q;
    int result= pow(p,q);
    cout<<result;
}