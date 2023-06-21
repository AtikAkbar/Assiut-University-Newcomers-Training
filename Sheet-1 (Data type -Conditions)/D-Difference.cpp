/*
Given four numbers A, B, C and D. Print the result of the following equation :

 X = (A * B) - (C * D).

Input
Only one line containing 4 separated numbers A, B, C and D ( - 10^5  ≤  A, B, C, D  ≤  10^5).

Output
Print "Difference  =  " without quotes followed by the equation result.
*/

#include <iostream>
using namespace std;

int main()
{

    long long A, B, C, D;

    cin >> A >> B >> C >> D;

    long long X = (A * B) - (C * D);
    cout << "Difference = " << X << endl;

    return 0;
}

// #include <iostream>
// #include <cstdint>

// int main()
// {
//     int64_t A, B, C, D;
//     std::cin >> A >> B >> C >> D;

//     int64_t X = (A * B) - (C * D);

//     std::cout << "Difference = " << X << std::endl;

//     return 0;
// }
