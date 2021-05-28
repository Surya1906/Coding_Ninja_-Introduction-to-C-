/* 
Code : Triangle of Numbers

Print the following pattern for the given number of rows.
Pattern for N = 4
   1
  232
 34543
4567654
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1:
5
Sample Output 1:
          1
         232
        34543
       4567654
      567898765
Sample Input 2:
4
Sample Output 2:
           1
          232
         34543
        4567654
*/

#include <iostream>
using namespace std;

int main() {
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    
    int n,i = 1;
    cin >> n;
    while (i<=n){
        int k = 1;
        while (k<=n-i){
            cout << " ";
            k++;
        }
        int j=1,n1=i;
        while (j <= i){
            cout << n1;
            j= j+1;
            n1++;
        }
        n1--;
        j= i-1;
        while (j >=1){
            n1--;
            cout << n1;
            j = j-1;
        }
        cout << "\n";
        i++;
    }
}