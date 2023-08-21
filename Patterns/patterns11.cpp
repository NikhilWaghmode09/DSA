// Program to generate pattern 11.
// NOTE: FOR PATTERN PROBLEMS 'i' is used as no. of rows and 'j' is used as no. of columns.
//  Always look for relation between the row and column with the pattern.

/* OUTPUT:
Enter a number: 3
A B C 
D E F
G H I
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number: ";
    cin >> n;
 
    int i = 1;
    int count = 'A';  //stores ascii value of 'A'
    while (i <=n)
    {
        
        int j = 1;
        while(j<=n){

        cout << char(count) << " "; //Typecasting 
        count++;
        j++;
        }
    cout << endl;
    i++;
    }
    
    return 0;
}