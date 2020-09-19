#include<iostream>

using namespace std;

int main()
{
    string add;
    while(cin>>add){
        for(int i = 0; i<add.size(); i++){
            if(add[i]=='A' || add[i]=='B' || add[i]=='C')
                cout<<"2";
            else if(add[i]=='D' || add[i]=='E' || add[i]=='F')
                cout<<"3";
            else if(add[i]=='G' || add[i]=='H' || add[i]=='I')
                cout<<"4";
            else if(add[i]=='J' || add[i]=='K' || add[i]=='L')
                cout<<"5";
            else if(add[i]=='M' || add[i]=='N' || add[i]=='O')
                cout<<"6";
            else if(add[i]=='P' || add[i]=='Q' || (add[i]=='R' || add[i]=='S'))
                cout<<"7";
            else if(add[i]=='T' || add[i]=='U' || add[i]=='V')
                cout<<"8";
            else if(add[i]=='W' || add[i]=='X' || (add[i]=='Y' || add[i]=='Z'))
                cout<<"9";
            else
                cout<<add[i];
        }
        cout<<endl;
    }
    return 0;
}
