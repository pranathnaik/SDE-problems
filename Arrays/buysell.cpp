#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int a[size];

    for (int i = 0; i < size; i++)
        cin >> a[i];

    int min = a[0];
    int profit = 0;

    for (int i = 1; i < size; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
        if (profit < a[i] - min)
            profit = a[i] - min;
    }

    cout << profit;
}