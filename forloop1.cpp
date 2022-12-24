//Input Format:
//
//You will be given two positive integers,  and  (), separated by a newline.
//
//Output Format:
//
//For each integer  in the inclusive interval :
//
//If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
//Else if  and it is an even number, then print "even".
//Else if  and it is an odd number, then print "odd".
//
//Sample Input:
//8
//11
//Sample Output
//eight
//nine
//even
//odd

#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    string arr1[]={"","one","two","three","four","five","six","seven","eight","nine"}; //first element is there to make the indexing same as the elements in words.
    for(int i=a;i<=b;i++){
        if(i<=9){
            cout<<arr1[i]<<"\n";
        }
        else{
            if(i%2==0){
                cout<<"even\n";
            }
            else{
                cout<<"odd\n";
            }
        }
        
    }
    return 0;
}

