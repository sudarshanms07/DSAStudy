#include <iostream>
using namespace std;

void read(int *arr,int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
}

void swap(int *a,int *b){
    int temp= *a;
    *a= *b;
    *b= temp;
}

int sort(int *arr,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>>arr[j]){
            swap(arr[i],arr[j]);
            }
        }
    }
    cout<<arr[n];
}

int display(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int n=5;
    int arr[5] ;
    read(arr,n);

    int arr1[n] ;
    arr1 [n]= sort(arr,n);

    display(arr1,n);

}