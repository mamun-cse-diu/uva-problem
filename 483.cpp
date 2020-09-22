#include<iostream>
#include<cstring>
#include <cctype>
#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    string str,str1;
    while(getline(cin, str)){
          int i = 0;
          while(i<str.size()){
            if(str[i]!=char(32)){
                str1+=str[i];
            }
            else{
                reverse(str1.begin(),str1.end());
                cout<<str1<<" ";
                str1.clear();
            }
            i++;
        }
        reverse(str1.begin(),str1.end());
        cout<<str1<<endl;
        str1.clear();
    }
}
