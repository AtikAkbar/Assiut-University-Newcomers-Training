/*
Given two numbers N and M. Print the summation of their last digits.

Input
Only one line containing two numbers N, M (0 ≤ N, M ≤ 10^18).

Output
Print the answer of the problem.

Note
First Example :

last digit in the first number is 3 and last digit in the second number is 2.

So the answer is: (3 + 2 = 5)
*/
#include <iostream>
using namespace std;

int main()
{
    unsigned long long M;
    unsigned long long N;

    cin >> M >> N;

    int a = M % 10;
    int b = N % 10;

    cout << a + b << endl;
}