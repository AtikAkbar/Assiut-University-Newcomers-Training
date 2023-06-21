/*
Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.

Input
Only one line containing two separated numbers X, Y (1  ≤  X, Y  ≤  10^5).

Output
Print 3 lines that contain the following in the same order:

1. "X + Y = summation result" without quotes.
2. "X * Y = multiplication result" without quotes.
3. "X - Y = subtraction result" without quotes.
*/
#include <iostream>
using namespace std;

int main()
{
    long long x;
    long long y;

    cin >> x >> y;

    cout << x << " + " << y << " = " << x + y << endl;
    cout << x << " * " << y << " = " << x * y << endl;
    cout << x << " - " << y << " = " << x - y << endl;

    return 0;
}

// 5 + 10 = 15
// 5 * 10 = 50
// 5 - 10 = -5
// 5 + 10 = 15
// 5 * 10 = 50
// 5 - 10 = -5
