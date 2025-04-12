/* find the maximum element in an array*/

#include <iostream>

using namespace std;

int main()
{
    int n,maxi;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            if(a[i]>a[j]){
                maxi=a[i];
            }
        }
    }
    cout<<"The Maximum element in the array is  "<<maxi<<endl;
    return 0;
}
