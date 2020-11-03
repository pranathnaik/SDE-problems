// Sort an array of 0’s 1’s 2’s without using extra space or sorting algo
#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    int low = 0;
    int mid = 0;
    int high = size-1;
    int temp;
    while (mid != high+1)
    {
        switch (a[mid])
        {
        case 0:
            temp=a[low];
            a[low]=a[mid];
            a[mid]=temp;
            low++;
            mid++;
            break;
        case 1:
            mid++;
            break;

        case 2:
            temp=a[mid];
            a[mid]=a[high];
            a[high]=temp;
            high--;
            break;

        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "\t";
    }
}