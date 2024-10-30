// https://codeforces.com/problemset/problem/25/A

// take numbers in an array
// iterate through the array
// find count of even and odd numbers
// cout the count which is greater than the other

#include <iostream>
using namespace std;
 
int main()
{
    int i, n, num, evenCount = 0, oddCount = 0, eI, oI;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        cin >> num;
        if(num % 2 == 0)
        {
            evenCount++;
            eI = i;
        }
        else if (num % 2 != 0)
        {
            oddCount++;
            oI = i;
        }
    }
    if(evenCount > oddCount)
    {
        cout << oI << endl;
    }
    else if(oddCount > evenCount)
    {
        cout << eI << endl;
    }
    return 0;
}
