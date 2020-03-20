/*
Objective 
Today, we're learning about the Array data structure. Check out the Tutorial tab for learning materials and an instructional video!
Task 
Given an array, , of  integers, print 's elements in reverse order as a single line of space-separated numbers.
Input Format
The first line contains an integer,  (the size of our array). 
The second line contains  space-separated integers describing array 's elements.
Constraints

, where  is the  integer in the array.
Output Format
Print the elements of array  in reverse order as a single line of space-separated numbers.
Sample Input
4
1 4 3 2
Sample Output
2 3 4 1
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    vector <int> v;
    int N; cin >> N;
    int e;

    for(int i=0; i<N; i++){
        cin >> e;
        v.push_back(e);
    }

    for(auto it=v.rbegin(); it != v.rend(); it++)
        cout << *it << " ";

    return 0;
}
