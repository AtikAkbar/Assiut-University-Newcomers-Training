/*
Given a number N. Print the summation of the numbers that is between 1 and N (inclusive).

Input
Only one line containing a number N (1≤N≤10^9)

Output
Print the summation of the numbers that are between 1 and N (inclusive).

Note
First Example :
the numbers between 1 and 3 are 1,2,3 .
So the answer is: (1 + 2 + 3 = 6)

Second Example :
the numbers between 1 and 10 are 1,2,3,4,5,6,7,8,9,10.
So the answer is: (1 + 2 + 3 + 4 + 5 + 6 +7 +8 + 9 + 10 = 55)

*/

#include <iostream>
using namespace std;

int main()
{
    long long n;
    long long sum = 0;

    cin >> n;

    for (long long i = n; i > 0; i--)
    {
        sum += i;
    }
    cout << sum << endl;
}