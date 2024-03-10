// Question
// https://codeforces.com/problemset/problem/581/A

// Explanation:
// output the small integer out of 2 as the number of days he can wear different socks
// subtract the small integer from the greater one
// divide that result by 2 as this is the count of the same socks he would wear
// output both numbers

// Solution:
#include <iostream>
using namespace std;

int main() {
    int a, b, i, j, k;
    cin >> a >> b;
    if(a<b)
    {
      i = a;
      k = b - a;
      j = k / 2;
    }
    else
    {
      i = b;
      k = a - b;
      j = k / 2;
    }
    cout << i << " " << j << endl;
    return 0;
}
