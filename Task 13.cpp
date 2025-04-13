// count of numericals in a string


#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    string s;
    int c;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])){
                c+=1;
    }
    }
    cout<<"The number of numerals in the string is "<<c<<endl;
    return 0;
}
