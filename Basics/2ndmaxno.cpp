#include <iostream>
using namespace std;
int main(){
    int arr[]={4,5,2,7,6,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int mx=0;
    int smx=0;
    for(int i=0;i<n;i++){
        if(arr[i]>mx)
        mx=arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>smx && arr[i]!=mx)
        smx=arr[i];
    }
    cout<<mx<<" "<<smx;

}