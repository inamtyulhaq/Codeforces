// https://codeforces.com/problemset/problem/155/A

// take input all values
// use a nested for loop
// outer loop iterates from index 1 of array (as 1st element can't be amazing)
// inner loop iterates from index 0 (you have to match the certain result of a contest with all
// previous contests
// now use two books (brute force approach)
// if any array element is less then or equal to the current array element, it's aint greater than all elements at least (bool1-->false)
// if any array element is greater then or equal to the current array element, it's aint smaller than all elements at least (bool2-->false)
// now if any bool still remain true, count++, else count+=0.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n], amazingCount = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        bool isGreatest = true;
        bool isSmallest = true;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] <= arr[j])
            {
                isGreatest = false;
            }
            if (arr[i] >= arr[j])
            {
                isSmallest = false;
            }
            if (!isGreatest && !isSmallest)
            {
                break;
            }
        }
        if (isGreatest)
        {
            amazingCount++;
        }
        if (isSmallest)
        {
            amazingCount++;
        }
    }
    cout << amazingCount << endl;
    return 0;
}
