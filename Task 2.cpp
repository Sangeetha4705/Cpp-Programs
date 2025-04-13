/*Find the sum of elements in a array*/

#include <iostream>

using namespace std;

int main()
{
    int n,sum;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    cout<<"The sum of elements in an array is "<<sum;
    return 0;
}
