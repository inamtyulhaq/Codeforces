// https://codeforces.com/group/MWSDmqGsZm/contest/219856/my

// print their lengths and then the strings without any space
// now interchange the first characters of both strings
// now print both strings with a space

#include <iostream>

using namespace std;

int main()
{
    string A, B;
    getline(cin, A), getline(cin, B);
    cout << A.length() << " " << B.length() << "\n"
         << A << B << "\n";
    char temp = A[0];
    A[0] = B[0];
    B[0] = temp;
    cout << A << " " << B << endl;
}
