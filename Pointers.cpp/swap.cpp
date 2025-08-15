#include<bits/stdc++.h>
using namespace std;

void swap(int *pointer1, int *pointer2){

    int temp= *pointer1;
    *pointer1= *pointer2;
    *pointer2= temp;
}

int main(){
    int x=10;
    int y=20;
    
    int *ptr1= &x;
    int *ptr2= &y;

    swap(ptr1,ptr2);

    cout<<x<<" "<<y;
}