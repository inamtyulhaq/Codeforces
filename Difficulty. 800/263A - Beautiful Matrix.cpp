// https://codeforces.com/contest/263/problem/A

// take the matrix in a single 1D array
// firstly, simple make brute force calculations for ranges on a paper
// then implement
// do remember to handle edge cases that may arise if you submit solution
// (your code will fail on some edge cases)
// cout

#include <iostream>
using namespace std;

int main()
{
     int a[25], count = 0;
     for (int i = 0; i < 25; i++)
     {
          cin >> a[i];
     }
     for (int i = 0; i < 25; i++)
     {
          if (i >= 0 && i <= 4)
          {
               if (a[i] == 1)
               {
                    count += 2;
                    a[i + 10] = 1;
               }
          }
          if (i >= 20 && i <= 24)
          {
               if (a[i] == 1)
               {
                    count += 2;
                    a[i - 10] = 1;
               }
          }
          if (i >= 5 && i <= 9)
          {
               if (a[i] == 1)
               {
                    count++;
                    a[i + 5] = 1;
               }
          }
          if (i >= 15 && i <= 19)
          {
               if (a[i] == 1)
               {
                    count++;
                    a[i - 5] = 1;
               }
          }
     }
     for (int i = 0; i < 25; i++)
     {

          if (i == 10)
          {
               if (a[i] == 1)
               {
                    count += 2;
                    a[i + 2] = 1;
               }
          }
          if (i == 14)
          {
               if (a[i] == 1)
               {
                    count += 2;
                    a[i - 2] = 1;
               }
          }
          if (i == 11)
          {
               if (a[i] == 1)
               {
                    count++;
               }
          }
          if (i == 13)
          {
               if (a[i] == 1)
               {
                    count++;
                    a[i - 1] = 1;
               }
          }
     }
     cout << count;
     return 0;
}
