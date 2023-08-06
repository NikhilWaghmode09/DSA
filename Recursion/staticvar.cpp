//Program illustrates the use of static variables.
//Static elements are allocated storage only once(i.e in static storage) & hence the are initialized only once
//they basically retain their value. like demonstrated in the fun1() function.

#include<iostream>
using namespace std;

int x = 0;  //Global variable. This also works as static variable.
int fun(int n){
    static int x = 0;  //Static variable. This also works as global variable.
    
    if (n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0;
}

/*
//Functions the values of n and x as recursion occurs.
void fun1(int n){ 

    static int x = 0;  //if you remove the static keyword then for every iternation of recursion x will be initilaized to 0.
    if (n>0){
        x++;
        cout << n << endl;
        cout <<"x: "<< x << endl;
        fun1(n-1);
    }
    
}
*/
int main(){
    int n = 12;
    cout<<fun(n)<<endl;
    // fun1(n);
    return 0;
}