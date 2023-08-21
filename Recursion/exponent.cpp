#include<iostream>
using namespace std;
int power(int n,int x){  //n^x
    if(x==0) return 1;
    return power(n,x-1)*n;
}
//eg 2^8 we can write it as (2*2)^4. and
//eg if power is odd 2^9 then 2*(2*2)^4.
int Opower(int n,int x){  // Optimal(faster) version of power function. It reduces the no. of calls to half.
    if(x==0) return 1;
    if(x%2==0) return power(n*n,x/2);
    else return n*power(n*n,x/2);
}
int main(){
    int n;
    int x;
    cout << "Enter value of n and x: "<< endl;
    cin>>n>>x;
    cout<<"Result of power: "<<power(n,x)<<endl;
    cout<<"Result of power(Optimal function): "<<Opower(n,x)<<endl;
    return 0;
}