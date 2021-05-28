/*
Start Pattern

Print the following pattern
Pattern for N = 4
   *
  ***
 *****
*******
Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1 :
3
Sample Output 1 :
   *
  *** 
 *****
Sample Input 2 :
4
Sample Output 2 :
    *
   *** 
  *****
 *******
*/

#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int k = 1,j = 1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
        while(j<=(2*i)-1){
            cout<<'*';
            j++;
        }
        cout <<"\n";
        i++;
    }
  
}

