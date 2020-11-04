//missing/duplicate
#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int a[size];
    int temp[size + 1];
    for (int i = 0; i < size; i++)
        cin >> a[i];
    int pos;
    for (int i = 1; i <= size; i++)
        temp[i] = 0;
    for (int i = 0; i < size; i++)
    {
        pos = a[i];
        if (temp[pos] == 0)
        {
            temp[pos] = 1;
        }

        else if (temp[pos] == 1)
        {
            temp[pos] = 2;
        }
    }

    for (int i = 1; i <= size; i++)
    {
        if (temp[i] == 2)
        {
            cout << "\t" << i << "\t";
        }
        if (temp[i] == 0)
            cout << "\t" << i << "\t";
    }
}