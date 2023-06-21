/*
Given 2 numbers A and B. Print floor, ceil and round of A/B

Note:

Floor: Is a mathematical function that takes a real number X and its output is the greatest integer less than or equal to X. Floor of 2.31 is 2.

Ceil: Is a mathematical function that takes a real number X and its output is the smallest integer larger than or equal to X. Celing of 2.31 is 3.

Round: Is a mathematical function that takes a real number X and its output is the closest integer to that number X. Round of 7.3 is 7, 7.5 is 8, 7.7 is 8.

Input
Only one line containing two numbers A and B (1≤A,B≤10^3)

Output
Print 3 lines that contain the following in the same order:

1. "floor A / B = Floor result" without quotes.
2. "ceil A / B = Ceil result" without quotes.
3. "round A / B = Round result" without quotes.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double A, B;

    cin >> A >> B;

    double result = A / B;

    double fl = floor(result);
    double cl = ceil(result);
    double rd = round(result);

    cout << "floor " << (int)A << " / " << (int)B << " = " << fl << endl;
    cout << "ceil " << (int)A << " / " << (int)B << " = " << cl << endl;
    cout << "round " << (int)A << " / " << (int)B << " = " << rd << endl;
}
