#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return ;
    cout<<"n in function:"<<n<<endl;
    print(n-1);
}
int main(){
int n=8;

print(n);

cout<<"n in int main:"<<n;
}