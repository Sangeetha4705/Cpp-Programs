/* Merge two arrays*/

#include <iostream>

using namespace std;

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    int j=0;
    for(int k=n1;k<n1+n2;k++){
            a[k]=b[j];
            j++;
    }
    cout<<"The Merged array elements are: ";
    for(int i=0;i<n1+n2;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
