#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int a[size];
    int sum = 0;
    int max;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    max = a[0];
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
        if (sum < 0)
            max = 0;
        if (sum > 0)
            max = sum;
    }

    cout << max;
}