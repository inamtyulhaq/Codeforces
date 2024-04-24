// https://codeforces.com/contest/1955/problem/A

// You need to find minimum cost to buy yogurts.
// Input the number of yogurts to buy, price of a single yogurt or price of two yogurts at the promotion price.
// Take an integer c and assign it the price of buying all yogurts at the price of a single yogurt (without promotion).
// Now, find the price of buying all yogurts at the promotion price.
// Divide the number of yogurts by 2 and multiply it with the promotion price.
// Also, if n remains odd, multiply it with the original single yogurt price and add them up and assign them to another integer d.
// Now, compare both and output the cheapest price to buy yogurts.
// If both prices match, may output any (see code).

#include <iostream>
using namespace std;

int main()
{
     long long t;
     cin >> t;
     while (t--)
     {
          int n, a, b;
          cin >> n >> a >> b;
          int c = a * n;
          int d = (n / 2) * b + (n % 2) * a;
          if (c >= d)
          {
               cout << d << endl;
          }
          else
          {
               cout << c << endl;
          }
     }
     return 0;
}
