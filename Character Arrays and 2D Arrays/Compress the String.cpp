/* 
Compress the String

Write a program to do basic string compression. For a character which is consecutively repeated more than once, replace consecutive duplicate occurrences with the count of repetitions.
Exmple:
If a string has 'x' repeated 5 times, replace this "xxxxx" with "x5".

The string is compressed only when the repeated character count is more than 1.
Note :
Consecutive count of every character in the input string is less than or equal to 9.
Input Format:
The first and only line of input contains a string without any leading and trailing spaces.
Output Format:
The only line of output prints the updated string.
Note:
You are not required to print anything. It has already been taken care of.
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second
Sample Input 1:
aaabbccdsa
Sample Output 1:
a3b2c2dsa
Sample Input 2:
aaabbcddeeeee
Sample Output 2:
a3b2cd2e5
*/

void stringCompression(char input[]) {
    // Write your code here
    int len = 0,count = 1,c=0,i;
    while (input[len] != '\0'){
        len++;
    }
    for (i = 0;i<len;i++){
        if (input[i] == input[i+1]){
            count++;
        }
        else{
            if (count != 1){
                input[c] = input[i];
                input[c+1] = char(count + 48);
                c = c + 2;
            }
            else{
                input[c] = input[i];
                c = c + 1;
            }
            count = 1;
        }
    }
    if (count != 1){
                input[c] = input[i];
                input[c+1] = char(count + 48);
                c = c + 2;
            }
    else{
            input[c] = input[i];
            c = c + 1;
        }
    input[c] = '\0';
}