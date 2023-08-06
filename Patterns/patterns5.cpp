// Program to generate pattern 5.
// NOTE: FOR PATTERN PROBLEMS 'i' is used as no. of rows and 'j' is used as no. of columns.
//  Always look for relation between the row and column with the pattern.

/* OUTPUT:
Enter a number: 3
* 
* * 
* * * 
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
        while(j<=i){  //LOGIC: j<=i.
        cout << "*" << " ";
        j++;
        }
    cout << endl;
    i++;
    }
    
    return 0;
}