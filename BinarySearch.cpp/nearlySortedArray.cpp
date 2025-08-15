#include <iostream>
using namespace std;

int nearlySortedArray(int arr[],int n,int target){

int s=0;
int e=n-1;
int mid = s+ (e-s)/2;

while(s<=e){
    if (mid-1>0 & arr[mid-1]==target){          //mid-1 and mid+1 condition for array limit
        return mid-1;
    }
    if(arr[mid]==target){
        return mid;
    }
    if(mid+1<n & arr[mid+1]==target){
        return mid+1;
    }

    if(target> arr[mid+1]){
        //move to right
        s=mid+2;    //+2 for skipping the already scanned index
    }
    else{
        //move to left
        e=mid-2;    //+2 for skipping the already scanned index
    }
    mid = s+ (e-s)/2;
}
return -1;
}

int main(){
    int arr[6]={10,30,20,40,50,60};
    int n=6;
    int target=10;

    cout<<"Target is at index: "<<nearlySortedArray(arr,n,target);
}