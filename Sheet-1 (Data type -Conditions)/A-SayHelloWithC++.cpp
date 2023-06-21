/* Given a name S. Print "Hello, (name)" without parentheses.

Input
Only one line containing a string S.

Output
Print "Hello, " without quotes, then print name. */

#include<iostream>
using namespace std;

int main() {
    string S;
    cin >> S;
    cout << "Hello, " + S;
    return 0;
}