//PRIME NOR COMPSITE 

#include<iostream>
using namespace std;
int main()
{
    int n,i,num=1;

    cin>>n;
    if(n==1){
        cout<<"1 is neither prime nor a composite."<<endl;
    }
    else{
        for(i=2;i<n;i++){
        if(n%i==0){
            num=0;
            break;
        }
    }
    if(num){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
    }
    
    return 0;
}