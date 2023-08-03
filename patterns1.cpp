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

    while (i < n) //< is used to ensure the range is upto n characters
    {
        int j = 0;
        while (j < n)
        {
            cout << "*"
                 << " ";
            j++;
        }
        cout << "\n";
        i++;
    }
    return 0;
}