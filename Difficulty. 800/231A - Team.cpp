/*if any two variables are 1, then they solve the problem and the count of problems increases.*/


#include <iostream>
using namespace std;

int main()
{
    int n, a, b, c, num = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if(a <=1 && a >=0 && b <=1 && b >=0 && c <=1 && c >=0)
        {
            if(a == 1 && b == 1)
            {
                num++;
            }
            else if (a == 1 && c == 1)
            {
                num++;
            }
            else if (b == 1 && c == 1)
            {
                num++;
            }
            else if (a == 1 && b == 1 && c == 1)
            {
                num++;
            }
        }
    }
    cout << num;
    return 0;
}
