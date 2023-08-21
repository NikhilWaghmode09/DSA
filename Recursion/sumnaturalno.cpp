//gives sum of n natural numbers using recursion.
// Sum(n) = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9....(n-1) + n.
// Therefore, We can write Sum(n) = Sum(n-1) + n. this the recursive defination.
#include<iostream>
using namespace std;

int sum(int n){ //RECURSIVE FUNCTION
    if(n>0){ //Time comeplexity O(n). Space Complexity O(n).
        return n+sum(n-1); //LOGIC
    }
    return 0;
}

int Isum(int n){   //Time complexity O(n). Space Complexity O(1).
    int s = 0; //ITERATIVE FUNCTION
    for(int i=0;i<=n;i++){
        s = s + i;
    }
    return s;
}
int Fsum(int n){ //Formula for sum of n natural numbers. //Time complexity O(1).
    return n*(n+1)/2;
}
int main(){
    int n = 5;
    cout << "sum(using Recursive Function): " << sum(n)<< endl;
    cout<< "sum(using Iterative Function): " << Isum(n)<< endl;
    cout<< "sum(using Formula): " << Fsum(n)<< endl;
    return 0;
}