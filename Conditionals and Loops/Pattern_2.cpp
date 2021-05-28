/*
Number Pattern 2
Send Feedback
Print the following pattern
Pattern for N = 4
   1
  23
 345
4567

Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Sample Input :
5
Sample Output :
    1
   23
  345
 4567
56789
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
        int k = 1,j = 1,v=i;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
        while(j<=i){
            cout<<v;
            v++;
            j++;
        }
        cout <<"\n";
        i++;
    }
  
}



