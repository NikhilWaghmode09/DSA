//Program to generate pattern 1.     
//NOTE: FOR PATTERN PROBLEMS 'i' is used as no. of rows and 'j' is used as no. of columns. 
// Always look for relation between the row and column with the pattern.

/* OUTPUT: Enter a number: 5
* * * * * 
* * * * * 
* * * * *
* * * * *
* * * * *
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<< "Enter a number: ";
    cin >> n;
    int i = 0;

    while (i < n) // if i = 1 then use i<=n instead
    {
        int j = 0;
        while (j < n)
        {
            cout << "*" << " ";
            j++;
        }
        cout << "\n"; //to move the next line after the last column of 1st row.
        i++;
    }
    return 0;
}