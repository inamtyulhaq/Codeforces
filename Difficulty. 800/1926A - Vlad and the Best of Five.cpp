#include <iostream>
using namespace std;

int main() {
    int T, A , B;
    string str;
    cin >> T;
    while(T--)
    {
        A = 0;
        B = 0;
        for(int i = 0; i < 5; i++)
        {   
            cin >> str[i];
            if(str[i] == 'A')
            {
                A++;
            }
            else
            {
                B++;
            }
        }
        
        if(A>B)
        {
            cout << "A" << endl;
        }
        else
        {
            cout << "B" << endl;
        }
    }

    return 0;
}
