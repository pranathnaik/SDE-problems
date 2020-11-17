#include<iostream>

using namespace std;
int main() {
    int size;
    cin >> size;
    int a[size];

    for (int i = 0; i < size; i++)
        cin >> a[i];
        
    int ele;
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (count == 0) {
            ele = a[i];
        }

        if (ele == a[i]) {
            count++;
        } else {
            count--;
        }

    }
    cout << ele;
}