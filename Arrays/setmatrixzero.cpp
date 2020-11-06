#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
             cin >> a[i][j];
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 0)
            {
                for (int p = 0; p < n; p++)
                    if (a[i][p] != 0) a[i][p] = -1;
        
                for (int p = 0; p < n; p++)
                    if (a[p][j] != 0) a[p][j] = -1;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == -1) a[i][j] = 0;
             
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}