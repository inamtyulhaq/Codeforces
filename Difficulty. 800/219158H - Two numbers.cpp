// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H

// if your ceil, floor, round concepts are strong, its easy
// FLOOR:
// simply, take the integer answer of dividing A by B and assign it to FLOOR
// CEIL:
// it has two variations
// if A is exactly divisible by B, simply CEIL is same as FLOOR
// if not, then CEIL is FLOOR + 1
// ROUND:
// it has two variations
// if the difference between float and int is more than or equal to 0.50, ROUND is equal to CEIL
// else ROUND is equal to FLOOR

#include <iostream>

using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    float C = static_cast<float>(A) / B;
    int D = A / B;

    int floor, ceil, round;

    floor = D;
    float temp = C - D;
    if (temp != 0)
    {
        ceil = D + 1;
    }
    else
    {
        ceil = D;
    }
    if (temp >= 0.50)
    {
        round = ceil;
    }
    else
    {
        round = floor;
    }
    cout << "floor " << A << " / " << B << " = " << floor << endl;
    cout << "ceil " << A << " / " << B << " = " << ceil << endl;
    cout << "round " << A << " / " << B << " = " << round << endl;

    return 0;
}
