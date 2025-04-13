/*Remove dupliates in sorted Array*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }

    sort(a,a+n);

    int uniqueIndex = 0;

    for (int i = 0; i < n; i++) {
        if (i == 0 || a[i] != a[i - 1]) {
            a[uniqueIndex] = a[i];
            uniqueIndex++;
        }
    }

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < uniqueIndex; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
