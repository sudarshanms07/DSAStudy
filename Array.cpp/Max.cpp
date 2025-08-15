#include<iostream>
using namespace std;
int main(){
    int array[]={5,6,4,11,7};
    int size=sizeof(array)/sizeof(array[0]);
    int min=array[0];

    for(int idx=0;idx<size;idx++){
        if(array[idx]<min)
        min=idx;
    }
    cout<<min;

}