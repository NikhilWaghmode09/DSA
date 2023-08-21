//Factorial of a number using recursive and iterative functions.
#include<iostream>
using namespace std;

int fact(int n){ //RECURSIVE FUNCTION
    if(n==0){
        return 1;
    }
    //Time comeplexity O(n). Space Complexity O(n).
    return n*fact(n-1); //LOGIC
    
    
}

int Ifact(int n){   //Time complexity O(n). Space Complexity O(1).
    int x = 1; //ITERATIVE FUNCTION
    for(int i=1;i<=n;i++){
        x = x * i;
           
    }
    return x;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " (using Recursive Function): " << fact(n)<< endl;
    cout<< "Factorial of " << n << " (using Iterative Function): " << Ifact(n)<< endl;
    return 0;
}