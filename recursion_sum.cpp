// RECURSION FOR SUM OF 'n' NATURAL NOS.
#include <iostream>
using namespace std;
int fun(int n)
{
    int sum;
    if(n==0){
        return 0;
    }
    else{
        return fun(n-1)+n;
    }
}
int main() {
    cout << fun(5);
    return 0;
}
