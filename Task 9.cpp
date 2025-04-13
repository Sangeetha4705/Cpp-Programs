#include <iostream>

using namespace std;

int main()
{
    int n,sum,average;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    average=sum/n;
    cout<<"The Average of all the elements in the array is :"<<average<<" ";

    return 0;
}
