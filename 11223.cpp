#include<iostream>
#include<map>
#include<bits/stdc++.h>

using namespace std;

map <string, string> m;

void convert(){
    m[".-"] = "A";
    m["-..."] = "B";
    m["-.-."] = "C";
    m["-.."] = "D";
    m["."] = "E";
    m["..-."] = "F";
    m["--."] = "G";
    m["...."] = "H";
    m[".."] = "I";
    m[".---"] = "J";
    m["-.-"] = "K";
    m[".-.."] = "L";
    m["--"] = "M";
    m["-."] = "N";
    m["---"] = "O";
    m[".--."] = "P";
    m["--.-"] = "Q";
    m[".-."] = "R";
    m["..."] = "S";
    m["-"] = "T";
    m["..-"] = "U";
    m["...-"] = "V";
    m[".--"] = "W";
    m["-..-"] = "X";
    m["-.--"] = "Y";
    m["--.."] = "Z";
    m["-----"] = "0";
    m[".----"] = "1";
    m["..---"] = "2";
    m["...--"] = "3";
    m["....-"] = "4";
    m["....."] = "5";
    m["-...."] = "6";
    m["--..."] = "7";
    m["---.."] = "8";
    m["----."] = "9";
    m[".-.-.-"] = ".";
    m["--..--"] = ",";
    m["..--.."] = "?";
    m[".----."] = "\'";
    m["-.-.--"] = "!";
    m["-..-."] = "/";
    m["-.--."] = "(";
    m["-.--.-"] = ")";
	  m[".-..."] = "&";
    m["---..."] = ":";
    m["-.-.-."] = ";";
    m["-...-"] = "=";
    m[".-.-."] = "+";
    m["-....-"] = "-";
    m["..--.-"] = "_";
    m[".-..-."] = "\"";
    m[".--.-."] = "@";
}

int main(void)
{
    convert();
    string str,str1,temp;
    int n;
    cin>>n;
    getline(cin,temp);
    for(int j = 1; j<=n; j++){
          if(j>1)
              cout<<endl;

          cout << "Message #" << j << endl;
          getline(cin, str);
          int i = 0;
          while(i<str.size()){
            if(str[i]!=char(32)){
                str1+=str[i];
            }
            else{
                cout<<m[str1];
                str1.clear();
                if((i+1<str.size()) && str[i+1]==char(32)){
                    cout<<" ";
                    i++;
                }
            }
            i++;
        }
        cout<<m[str1]<<endl;
        str1.clear();
    }
}
