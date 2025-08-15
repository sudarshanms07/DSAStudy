#include <iostream>
using namespace std;
int f(int *array,int idx,int n){
    if (idx==n) return 0;
    cout<<array[idx]<<endl;
    f(array,idx+1,n);
}

int main(){
    int n=5;
    int array[5] = {4,5,7,6,4};
    f(array,0,5);
}