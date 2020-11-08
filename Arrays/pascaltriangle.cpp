#include <iostream>
#include <vector>
using namespace std;
int main()
{ 
    vector <int> vec;
    cout << vec.size();
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        vec.push_back(a);
    }
    int small = vec[0];
    for (int i = 0; i < n; i++)
    {
        if (small > vec[i]) small = vec[i];
    }
    cout << endl
         << small;
    vec.push_back(small);
        cout << vec.size();
}