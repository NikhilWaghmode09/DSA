// Nested recursion.
//intresting thing is that this function will return 91 for any value <=100.
#include<iostream>
using namespace std;
int fun(int n){

    if(n>100){
        return n-10;
    }
    else{
        return fun(fun(n+11)); //for every outer call you first need to evaluate the value of inner call.
    }
}
int main(){
    cout << fun(100);
    return 0;
}