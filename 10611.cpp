#include<iostream>

using namespace std;

int main()
{
    int n_lady,q_luchu;
    cin>>n_lady;
    int lady[n_lady];
    for(int i = 0; i<n_lady; i++)
        cin>>lady[i];

    cin>>q_luchu;
    int luchu[q_luchu];
    for(int i = 0; i<q_luchu; i++)
        cin>>luchu[i];

    int a=0,b=0;

    for(int i = 0; i<q_luchu; i++){
        a=0; b=0;
        for(int j = 0; j<n_lady; j++){
            if(lady[j]<luchu[i])
                a = lady[j];
            else if(lady[j]>luchu[i]){
                b = lady[j];
                break;
            }
        }
        if(a>0)
            cout<<a<<" ";
        else
            cout<<"X ";
        if(b>0)
            cout<<b<<endl;
        else
            cout<<"X"<<endl;
    }
    return 0;
}
