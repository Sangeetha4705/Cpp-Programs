/*Print only positive elements in array*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"The Positive Elements in the array are ;";
    for(int i=0;i<n;i++){
        if(a[i]<0)
            continue;
        cout<<a[i]<<" ";
    }
    return 0;
}
