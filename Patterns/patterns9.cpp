// Program to generate pattern 9.
// NOTE: FOR PATTERN PROBLEMS 'i' is used as no. of rows and 'j' is used as no. of columns.
//  Always look for relation between the row and column with the pattern.

/* OUTPUT:
Enter a number: 3
A A A
B B B
C C C
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number: ";
    cin >> n;
 
    int i = 1;

    while (i <=n)
    {
        
        int j = 1;
        while(j<=n){

        cout << char('A' + i - 1) << " "; //Typecasting 
        
        j++;
        }
    cout << endl;
    i++;
    }
    
    return 0;
}