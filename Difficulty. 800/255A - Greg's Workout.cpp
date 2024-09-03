// https://codeforces.com/contest/255/problem/A

// input all the numbers in an array
// remember the order, first he does chest exercise, then biceps, then back
// take three variables and take sum of these numbers (one by one) in order
// to depict three exercises
// use if else by mod division with 3
// output the respective exercise by see which variable has greater value
// keep correspondence of variables with exercises' names (better simple user exercises' names)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, chest = 0, biceps = 1, back = 0;
    cin >> n;
    int exercises[n];
    for (int i = 0; i < n; i++)
    {
        cin >> exercises[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 0)
            chest += exercises[i];
        else if (i % 3 == 1)
            biceps += exercises[i];
        else if (i % 3 == 2)
            back += exercises[i];
    }
    if (chest >= biceps && chest >= back)
        cout << "chest" << endl;
    else if (biceps >= chest && biceps >= back)
        cout << "biceps" << endl;
    else
        cout << "back" << endl;
    return 0;
}
