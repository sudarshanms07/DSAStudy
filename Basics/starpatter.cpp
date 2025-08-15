#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;
    int i,j;
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++)
        cout<<"*";
        cout<<endl;
    }
}