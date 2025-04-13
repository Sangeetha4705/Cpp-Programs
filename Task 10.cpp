/*Swap first and last element of array*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
     int temp=a[0];
     a[0]=a[n-1];
     a[n-1]=temp;
     cout<<"The Array after swapping"<<" ";
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
     }
}
