/*multiplied remaining hours by 60. subtracted minutes from it. outputted the answer.*/
#include <iostream>
using namespace std;
 
int main() {
    int t, h, m, m1;
    cin >> t;
    while (t--)
    {
        cin >> h >> m;
        h = 24 - h;
        int m1 = h * 60;
        m1 = m1 - m;
        cout << m1 << endl;
 
    }
 
    return 0;
}
