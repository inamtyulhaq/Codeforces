/*It was a bit tricky. It was about time complexity mainly. I found remainder and subtracted that
remainder from the divisor. Hence, that many times "a" has to be incremented by 1.*/

#include <iostream>
using namespace std;
 
int main() {
    long long a, b, rem = 0;;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        rem = a % b;
        if (rem == 0)
        {
            cout << rem << endl;
        }
        else
        {
            rem = b - rem;
            cout << rem << endl;
        }
    }
 
    return 0;
}
