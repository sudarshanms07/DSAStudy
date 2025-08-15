#include <iostream>
using namespace std;
int main(){
    int n, arr[]={4,5,6,1,8,2,3};
    cout<<"Enter target value";
    cin>>n;
    bool flag =false;
    for(int i= 0 ; i<sizeof(arr)/sizeof(arr[0]);i++){
        if (arr[i]==n){
            flag = true;
            break; }
    }
    if (flag == true) cout<<"Target is present";
    else cout<<"Target is not found";   
}