#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int a[size];

    for (int i = 0; i < size; i++)
        cin >> a[i];

    int small = a[0];
    int smallIndex;

    for (int i = 1; i < size; i++)
    {
        if (small > a[i])
        {
            small = a[i];
            smallIndex = i;
        }
    }
    if (smallIndex != size - 1)
    {
        int large = a[smallIndex + 1];
        for (int i = smallIndex + 1; i < size; i++)
        {
            if (large < a[i]) large = a[i];
        }
        cout << large - small;
    }
    else
    {
        cout << "0";
    }
}