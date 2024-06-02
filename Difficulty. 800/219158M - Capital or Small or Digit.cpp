// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M

// Simply, use if-else loops to match the criteria for required ASCIIs 
// of numbers, capital or small alphabets etc and output as per said in problem statement

#include <iostream>

using namespace std;
int main()
{
    char X;
    cin >> X;
    if (X >= 48 && X <= 57)
    {
        cout << "IS DIGIT" << endl;
    }
    else if (X >= 65 && X <= 90)
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }
    else if (X >= 97 && X <= 122)
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }

    return 0;
}
