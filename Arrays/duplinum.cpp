// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
// There is only one duplicate number in nums, return this duplicate number.
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
    int count = 0;
    int ele;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }
        if (count == 2)
        {
            ele = a[i];
            break;
        }
        else
        {
            count=0;
        }
        
    }
    cout << endl
         << ele;
}