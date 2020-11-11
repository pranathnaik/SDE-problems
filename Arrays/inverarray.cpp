#include<iostream>
using namespace std;
int main(){

    int size;
    cin>>size;
    int a[size];
    int count=0;
    for(int i=0;i<size;i++)
       cin>>a[i];
    
    for(int i=0;i<size;i++)
      {
          for(int j=1;j<size;j++)
          {
              if(a[i]>a[j])
               count++;
          }
      }

      cout<<endl<<count;

}