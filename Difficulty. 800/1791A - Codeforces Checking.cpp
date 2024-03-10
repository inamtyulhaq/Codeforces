// Question
// https://codeforces.com/contest/1791/problem/A

// Explanation:
// take a string with value "codeforces".
// input another character.
// if that character matches with any character from codeforces string while iterating,
// simply output YES

// Solution:
#include <iostream>
#include <string>
using namespace std;
int main() {
  int t;
  cin >> t;
  string str = "codeforces";
  string str1;
  int l = str.length();
  char c;
  while(t--)
  {
    cin >> c;
    str1 = "NO";
    for(int i = 0; i <= l; i++)
    {
      if(str[i]==c)
      {
        str1 = "YES";
      }
    }
    cout << str1 << endl;
  }
  return 0;
}
