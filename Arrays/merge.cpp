//merge two sorted array without using extra spaces
#include <iostream>
using namespace std;
int main()
{
    int M;
    int N;
    cin >> M >> N;
    int a[M];
    int b[N];
    for (int i = 0; i < M; i++)
        cin >> a[i];
    for (int i = 0; i < N; i++)
        cin >> b[i];

    for (int i = 0; i < M; i++)
    {
        if (b[0] < a[i])
        {
            int temp = a[i];
            a[i] = b[0];
            b[0] = temp;
            for (int j = 0; j < N; j++)
            {
                for (int k = 0; k < N; k++)
                {
                    if (b[j] < b[k])
                    {
                        temp = b[k];
                        b[k] = b[j];
                        b[j] = temp;
                    }
                }
            }
        }
    }

    for (int i = 0; i < M; i++)
        cout << a[i] << "\t";
    for (int i = 0; i < N; i++)
        cout << b[i] << "\t";
}