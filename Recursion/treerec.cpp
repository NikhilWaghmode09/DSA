//A tree recursion is where a function has more than one recursive calls.
//Time complexity O(2^n). Space complexity O(n).
#include<iostream>
using namespace std;
void fun(int n){
    if(n>0){
        cout << n << " "; 
        fun(n-1);
        fun(n-1);
    }
}
int main(){
    fun(3);
    return 0;
}