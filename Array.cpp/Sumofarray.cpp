#include<iostream>
using namespace std;
int main(){
    int array[]={2,5,7,3,8};
    int size=sizeof(array)/sizeof(array[0]);
    int sum=0;
    for(int idx=0;idx<size;idx++){
        sum+=array[idx];
        }
    cout<<sum<<endl;
}