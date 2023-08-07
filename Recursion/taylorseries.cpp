//taylor series 
//e^x= 1 + x + (x ^ 2)/(2!) + (x ^ 3)/(3!) + (x ^ 4)/(4!) +...
#include<iostream>
using namespace std;

// double sum(int n){
//     if(n>0) return n+sum(n-1);
//     return 0.0;
// }
// int power(int x, int n){
//     if(n==0) return 1;
//     if(n%2==0) return power(x*x,n/2);
//     else return x*power(x*x,n/2);
// }
// int fact(int n){
//     if(n==0) return 1;
//     return n*fact(n-1);
// }
// double taylor(int x,int n){
//     static int a = 0;
//     static double p =1;
//     static double f =1;

//     if(a<n){
//         p = p*x
//         return sum(power(x,a)/fact(a));
//         a++;    
//     }
//     return 0;
    
// }
double e(int x,int a){   // Time Complexity O(n^2).
    static double p = 1;
    static double f = 1;
    double r;
    if(a==0){
        return 1.0;
    }
    r = e(x,a-1);
    p = p*x;
    f = f*a;
    return r + p/f;
}
double Ie(int x, int a){
    double res = 1;
    double num = 1;
    double den = 1;
    for(int n = 1;n<=a;n++){
        num = num*x;
        den = den*n;
        res = res+(num/den);        
    }
    return res;
}
double Oe(int x,int a){
    static double result = 1;
    if(a==0){
        return result;
       
    }
    result = 1+x*result/a;
    return Oe(x,a-1);
}

int main(){
    // int n = 5;
    // cin>>n;
    //cout<<sum(n)<<endl;
    //cout<<power(3,4)<<endl;
    //cout<<fact(5)<<endl;
    cout << "result: " << e(3,10) << endl;
    cout << "Iterative result: " << Ie(3,10)<<endl;
    cout << "Optimized function result: " << Oe(3,10)<<endl; //e^3 until 10 terms.
    return 0;
}