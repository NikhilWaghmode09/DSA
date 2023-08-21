// Program to generate pattern 12.
// NOTE: FOR PATTERN PROBLEMS 'i' is used as no. of rows and 'j' is used as no. of columns.
//  Always look for relation between the row and column with the pattern.

/* OUTPUT:
Enter a number: 3
A B C 
B C D
C D E
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
        int count = 'A'; //stores ascii value of 'A'.Also it should again be initialzied with 'A' after every row.
        int j = 1;
        while(j<=n){

        cout << char(count + i - 1) << " "; //Typecasting 
        count++;
        j++;
        }
    cout << endl;
    i++;
    }
    
    return 0;
}