#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string str;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> str;
        char one = str[0];
        string num_str = str.substr(1);
        int two = stoi(num_str);
 
        for(int i = 1; i <= 8; i++)
        {
            if(i != two)
            {
            cout << str[0] << i << endl;
            }
        }
        for(int i = 97; i <= 104; i++)
        {
            char a = i;
            if(a != one)
            {
            cout << a << two << endl;
            }
        }
    }
    return 0;
}
