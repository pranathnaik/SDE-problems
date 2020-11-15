// Given a matrix mat[][] of size N x M, where every row and column is sorted in increasing order, and a number X is given. The task is to find whether element X is present in the matrix or not.

// Example 1:

// Input:
// N = 3
// M = 3
// mat[][]: 3 30 38
//          44 52 54
//          57 60 69
// X = 62
// Output:
// 0
// Explanation: 62 is not present in the
// matrix, so output is 0
#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cin >> a[i][j];
    }

    int el;
    cin >> el;
    int i = 0, j = c - 1;

    while (j >= 0 && i < c)
    {
        if (el == a[i][j])
        {
            cout << "1";
            break;
        }
        else if (el > a[i][j])
            i++;
        else
            j--;
    }

    if (j == -1 || i > c)
        cout << "0";
}