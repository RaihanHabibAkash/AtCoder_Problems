// Problem: Handmaid
// Platform: Atcoder
// Difficulty: ABC-A
// Link: https://atcoder.jp/contests/abc446/tasks/abc446_a
// Topics: String

/*
A - Handmaid  / 
Time Limit: 2 sec / Memory Limit: 1024 MiB

Score : 
100 points

Problem Statement
You are given the name 
S of a certain person. The first character of 
S is an uppercase English letter, and the other characters are lowercase English letters.

The name of this person's handmaid is the string obtained by converting the first letter of 
S to lowercase and adding Of to the beginning. Find the name of this handmaid.

Constraints
S is a string of length between 
1 and 
10, inclusive.
The first character of 
S is an uppercase English letter.
The characters of 
S other than the first are lowercase English letters.
Input
The input is given from Standard Input in the following format:

S
Output
Output the answer on one line.

Sample Input 1
Copy
Glen
Sample Output 1
Copy
Ofglen
Converting the first letter of Glen to lowercase gives glen, and adding Of to the beginning gives Ofglen.

Sample Input 2
Copy
I
Sample Output 2
Copy
Ofi
Sample Input 3
Copy
Fred
Sample Output 3
Copy
Offred
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;

    s[0] = tolower(s[0]);

    s.insert(0, "Of");

    cout << s << endl;

    return 0;
}