#include<bits/stdc++.h>
using namespace std;

void swap(int num1, int num2){
    int temp= num1;
    num1= num2;
    num2= temp;

}

int main(){
    int x=10;
    int y=20;
    
    //int *ptr1= &x;
    //int *ptr2= &y;

    swap(x,y);

    cout<<x<<" "<<y;
}