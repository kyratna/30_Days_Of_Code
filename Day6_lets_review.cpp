/*
Objective 
Today we're expanding our knowledge of Strings and combining it with what we've already learned about loops. Check out the Tutorial tab for learning materials and an instructional video!
Task 
Given a string, , of length  that is indexed from  to , print its even-indexed and odd-indexed characters as  space-separated strings on a single line (see the Sample below for more detail).
Note:  is considered to be an even index.
Input Format
The first line contains an integer,  (the number of test cases). 
Each line  of the  subsequent lines contain a String, .
Constraints


Output Format
For each String  (where ), print 's even-indexed characters, followed by a space, followed by 's odd-indexed characters.
Sample Input
2
Hacker
Rank
Sample Output
Hce akr
Rn ak
Explanation
Test Case 0:  
 
 
 
 
 
 
The even indices are , , and , and the odd indices are , , and . We then print a single line of space-separated strings; the first string contains the ordered characters from 's even indices (), and the second string contains the ordered characters from 's odd indices ().
Test Case 1:  
 
 
 
 
The even indices are  and , and the odd indices are  and . We then print a single line of  space-separated strings; the first string contains the ordered characters from 's even indices (), and the second string contains the ordered characters from 's odd indices ().
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t; cin >> t;
    int n=t;

    string s[n];

    for(int i=0; i<t; i++)
        cin >> s[i];
            
        for(int i=0; i<n; i++)
        {
            string se="",so="";

            for(int j=0; j<s[i].length(); j++){
                if(j%2 == 0)
                    se=se+s[i][j];
                else
                    so=so+s[i][j];
            }
            cout << se << " " << so << endl;
            
        }
    return 0;
}