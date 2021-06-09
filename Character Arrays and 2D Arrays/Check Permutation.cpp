/* 
Check Permutation

For a given two strings, 'str1' and 'str2', check whether they are a permutation of each other or not.
Permutations of each other
Two strings are said to be a permutation of each other when either of the string's characters can be rearranged so that it becomes identical to the other one.

Example: 
str1= "sinrtg" 
str2 = "string"

The character of the first string(str1) can be rearranged to form str2 and hence we can say that the given strings are a permutation of each other.
Input Format:
The first line of input contains a string without any leading and trailing spaces, representing the first string 'str1'.

The second line of input contains a string without any leading and trailing spaces, representing the second string 'str2'.
Note:
All the characters in the input strings would be in lower case.
Output Format:
The only line of output prints either 'true' or 'false', denoting whether the two strings are a permutation of each other or not.

You are not required to print anything. It has already been taken care of. Just implement the function. 
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second
Sample Input 1:
abcde
baedc
Sample Output 1:
true
Sample Input 2:
abc
cbd
Sample Output 2:
false
*/


bool isPermutation(char input1[], char input2[]) {
    // Write your code here
    int count[256] = {0};
    int len1 = 0;
    while (input1[len1] != '\0'){
        len1++;
    }
    int len2 = 0;
    while (input2[len2] != '\0'){
        len2++;
    }
    if (len1 != len2){
        return false;
    }
    for (int i = 0; i < len1; i++) {
        count[input1[i]]++;
    }
     for (int i = 0; i < len2; i++) {
        count[input2[i]]--;
    }
    for (int j = 0;j<len1;j++){
        if (count[input1[j]] != 0)
        return false;
    }
    return true;
}