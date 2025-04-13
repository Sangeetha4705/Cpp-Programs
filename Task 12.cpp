//palindrome or not

#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int l=0;
    int r=s.size()-1;
    while(l<r){
        if(s[l]!=s[r]){
            cout<<"Not Palindrome"<<endl;
            return 0;
        }
        l++;
        r--;
    }
    cout<<"Palindrome"<<endl;
    return 0 ;
}
