/*
HackerRank problem: https://www.hackerrank.com/challenges/printing-pattern-2/problem
*/
/*OUTPUT: 5
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5
*/
 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int start = 1;
    int len = 2*n - 1;
    int end = len;
    int arr[len][len];
    while(n!=0){
    
        int i = start;
        while(i<=end){
            int j = start;
            while(j<=end){
                if(i == start || i == end || j==start || j ==end){
                    arr[i-1][j-1] = n;
                }
                j++;  
            }
            i++;
        }
        start++;
        end--;
        n--;

    }
    for(int i =0;i<len;i++){
        for(int j = 0; j<len;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
