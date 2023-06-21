/*
Input
Only one line containing the following space-separated values: int, long long, char, float and double respectively.

Output
Print each element on a new line in the same order it was received as input.

Don't print any extra spaces.
*/

#include <iostream>
using namespace std;

int main()
{
    int i;
    long long l;
    char c;
    float f;
    double d;

    cin >> i >> l >> c >> f >> d;
    cout << i << endl;
    cout << l << endl;
    cout << c << endl;
    cout << f << endl;
    cout << d << endl;

    return 0;
}