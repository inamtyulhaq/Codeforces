// Question:
/*https://codeforces.com/contest/71/problem/A*/

/*I took number of words from system.
Took a string. found out its length by strlen. If length is greater than 10,
printed its first and last character and in between integer of length - 2.
Also, if length is less than 10, printed string as it is.*/

// Solution:
#include <stdio.h>
#include <string.h>
 
int main()
{
    int n;
    char str[101];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        
        scanf("%s", str);
        int len = strlen(str);
        if(strlen(str) <= 10)
        {
            printf("%s\n", str);
        }
        else if(strlen(str) > 10)
        {
            printf("%c%d%c\n", str[0], len-2, str[len - 1]);
        }
    }
 
    return 0;
}
