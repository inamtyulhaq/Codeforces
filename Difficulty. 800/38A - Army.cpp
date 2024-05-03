// https://codeforces.com/contest/38/problem/A

// You are given the ranks and then EXACTLY the number of years it takes
// to jump from rank 1 till rank n. Remember these years are given year by year.
// e.g. There are 3 ranks. 1 till 3. There will be two ds. First d to jump from rank 1 till 2
// and second d to jump from rank 2 till 3. 
// Now two ranks are given, a and .
// Simply input all variables
// Now loop from a till b. Just add all the respective d years from the d array.
// These are the total years to jump from rank a till rank b.
// Take care of loops start, end etc.
// Problem is easy.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int d[n];
    for (int i = 1; i < n; i++)
    {
        cin >> d[i];
    }
    int a, b;
    cin >> a >> b;
    int years = 0;
    for (int i = a; i < b; i++)
    {
        years += d[i];
    }
    cout << years << endl;
    return 0;
}
