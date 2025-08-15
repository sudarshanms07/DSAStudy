#include <iostream>
#include <limits.h>
using namespace std;

int mx(int arr[],int size,int idx,int &num){
    if(idx>=size){
        return -1;
    }
    num = min(num,arr[idx]);

    mx(arr,size,idx+1,num);
    return num;
}
int main(){
    int arr[5]={5,1,4,3,2};
    int size = 5;
    int min1= INT_MAX;
    int idx=0;
    
    cout<< mx(arr,size,idx, min1);

}