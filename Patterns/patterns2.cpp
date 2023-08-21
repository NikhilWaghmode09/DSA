//Program to generate pattern 2.     
//NOTE: FOR PATTERN PROBLEMS 'i' is used as no. of rows and 'j' is used as no. of columns. 
// Always look for relation between the row and column with the pattern.

/* OUTPUT: Enter a number: 4
4
1 1 1 1 
2 2 2 2
3 3 3 3
4 4 4 4
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 0;

    while(i<n){
        int j = 0;
        while(j<n){
            cout<<(i+1)<<" ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}