// Head Recursion and Tail Recursion.
/*DIFFERNCE BETWEEN A LOOP AND A RECURSION IS THAT A LOOP WILL ONLY HAVE ASCENDING PHASE 
WHILE A RECURSION WILL HAVE BOTH A LOOP AND ASCENDING AND DESCENDING PHASE*/
#include<iostream>
using namespace std;

void fun1(int x){
    if(x>0){
        fun1(x-1); //Head Recursion.(i.e. no other statements before recursive statements)
        cout<<x<<" ";  //Excecuted at returning time. Also known as Descending Phase.
    }
}
//Tail recursion(space complexity O(n)) can easily be converted into loop(space complexity O(1)).
//to convert following function to loop replace if with while and recursive statement with "x--".
void fun2(int x){ 
    if(x>0){
        cout<<x<<" "; //Excecuted at Calling time. Also known as Ascending Phase.
        fun2(x-1); //Tail Recursion.(i.e. no other statements after recursive statements)
    }
}

int fun3(int n){
    static int x =0;
    if(n>0){
        x++;
        return fun3(n-1)+x;
    }
    return 0;
}
int main(){
    int n =3;
    cout<<"Head Recursion: \n";
    fun1(n);
    cout<<"\nTail Recursion: \n";
    fun2(n);
    cout<< "\nFun3 :"<< fun3(n);
    
    return  0;
}