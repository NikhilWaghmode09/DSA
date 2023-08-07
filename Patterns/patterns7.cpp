// Program to generate pattern 7.
// NOTE: FOR PATTERN PROBLEMS 'i' is used as no. of rows and 'j' is used as no. of columns.
//  Always look for relation between the row and column with the pattern.
 
/* OUTPUT:
Enter a number: 4
1 
2 3
3 4 5
4 5 6 7
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
        int count = i;  //Maintain a count variable since we want to keep printing consecutive numbers.
        
        int j = 1;
        while(j<=i){
        cout << count << " ";
        count++;
        j++;
        }
    cout << endl;
    i++;
    }
    
    return 0;
}