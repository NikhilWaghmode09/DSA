//fun1 calls fun2. fun2 calls fun3 and fun3 calles fun1.A cycle is formed.
#include<iostream>
using namespace std;

void B(int n);  //B needs to be declared before calling in A.

void A(int n){
    if(n>0){
        cout<<n<<endl;
        B(n-1);
    }
}

void B(int n){
    if(n>1){
        cout<<n<<endl;
        A(n/2);
    }
}
int main(){
    A(20);
    return 0;
}