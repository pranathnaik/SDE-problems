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

    int temp;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < i; j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    for (int i = 0; i < r; i++)
    {
        int low = i;
        int high = c - 1;

        for (int j = 0; j < c; j++)
        {
            if (j >high)
                break;
            else
            {
                int temp = a[low][high];
                a[low][high] = a[low][j];
                a[low][j] = temp;
                high--;
            }
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << a[i][j] << "\t";

        cout << endl;
    }
}