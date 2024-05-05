// https://codeforces.com/contest/131/problem/A

// An extremely tricy problem.
// Remember the two key points from the problem statemenet.
// Firstly, make a copy of the string inputted, assign it to another string.
// Only change the string in two conditions.
// 1-If all the letters are capital.
// 2-If all letters except the first one are capital.
// Now use an if else.
// In the first conditional, there are again two things.
// 1-If a letter is capital, simply change it to small letter (+32).
// 2-If you find even a single letter small, it breaks the condition, so assign S with S1, to which it earlier copied itself to.
// Now, in another conditional.
// The first letter will always be small (our condition)
// Now, here is a trick
// Except first, if you find even a single letter which is small, simply assign S with S1 again
// Else, simply convert capital letter to small
// Also, don't forget to convert first letter to capital.
// This was a bit tricky

#include <iostream>

int main()
{
    std::string S;
    std::cin >> S;
    std::string S1 = S;
    if (S[0] >= 65 && S[0] <= 90)
    {
        for (int i = 0; i < S.size(); i++)
        {
            if (S[i] >= 97 && S[i] <= 122)
            {
                S = S1;
                break;
            }
            else if (S[i] >= 65 && S[i] <= 90)
            {
                S[i] = S[i] + 32;
            }
        }
    }
    else if (S[0] >= 97 && S[0] <= 122)
    {
        for (int i = 0; i < S.size(); i++)
        {
            if (S[0] >= 65 && S[0] <= 90)
            {
                S = S1;
                break;
            }
            else if (S[0] >= 97 && S[0] <= 122)
            {
                S[0] = S[0] - 32;
                for (int j = 1; j < S.size(); j++)
                {
                    if (S[j] >= 97 && S[j] <= 122)
                    {
                        S = S1;
                        break;
                    }
                    if (S[j] >= 65 && S[j] <= 90)
                    {
                        S[j] = S[j] + 32;
                    }
                }
                break;
            }
        }
    }
    std::cout << S << std::endl;
    return 0;
}
