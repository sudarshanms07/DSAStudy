#include<iostream>
using namespace std;
int main(){
    int array[]={4,5,2,7,3};
    int targetvalue= 7;
    int pairs=0;

    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
        if(array[i]+array[j]==targetvalue){
        pairs++;
        }
        

        }
}cout<<pairs;
}