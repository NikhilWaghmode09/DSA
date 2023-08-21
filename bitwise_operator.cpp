//Program includes Bitwise Operators(Operates on bits).
// &(AND),|(OR), ~(NOT), ^(XOR), << (left shift), >> (right shift)(padding always 0 for +ve no.)

#include<iostream>
using namespace std;

int main(){
    int a = 4;  // ..000100
    int b = 6;  // ..000110

    cout<< "(a & 0b): "<<(a&b)<<endl;  //only 1&1=1
    cout<<"(a | b): "<<(a|b)<<endl;    // 0 or 1 = 1
    cout<<"(~a): "<<(~a)<<endl; //For the result of not(~) the sign is dependent on the first bit of 1's complement..
    cout<<"(~b): "<<(~b)<<endl; // and the value is dependent on the 2's complement(Adding 1).
    cout<<"(a^b): "<<(a^b)<<endl; //True for different values.
    cout<<"(a>>2) right shift: "<<(a>>2)<<endl; 
    cout<<"(b>>2) right shift: "<<(b>>2)<<endl;
    cout<<"(a<<2) left shift: "<<(a<<2)<<endl;
    cout<<"(b<<2) left shift: "<<(b<<2)<<endl;
    
    int i = 7; //eg no.
    cout << "i++: "<< i++<< endl; // i++ post increment(value used first and then updated) 
    cout << "++i: "<< ++i<< endl; // ++i pre increment(value updated first and then used)
    cout << "i--: "<< i--<< endl; // i-- post decrement (value used first and then updated)
    cout << "--i: "<< --i<< endl;// --i pre decrement(value updated first and then used)
    
    return 0;
}