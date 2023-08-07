<<<<<<< HEAD
// Program to generate pattern 8.
// NOTE: FOR PATTERN PROBLEMS 'i' is used as no. of rows and 'j' is used as no. of columns.
//  Always look for relation between the row and column with the pattern.
 
/* OUTPUT:
Enter a number: 4
1 
2 1
3 2 1
4 3 2 1
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
        count--; //decrement count variable
        j++;
        }
    cout << endl;
    i++;
    }
    
    return 0;
=======
// Program to generate pattern 8.
// NOTE: FOR PATTERN PROBLEMS 'i' is used as no. of rows and 'j' is used as no. of columns.
//  Always look for relation between the row and column with the pattern.
 
/* OUTPUT:
Enter a number: 4
1 
2 1
3 2 1
4 3 2 1
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
        count--; //decrement count variable
        j++;
        }
    cout << endl;
    i++;
    }
    
    return 0;
>>>>>>> 46e931a (update patterns6.cpp, patterns7.cpp and patterns8.cpp)
}