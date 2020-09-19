#include<iostream>

using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--){
        int sum,div,x,y;
        cin>>sum>>div;
        if(div>sum)
            cout<<"impossible"<<endl;
        else{
            x = (sum+div)/2;
            y = x-div;
            if(x+y==sum && abs(x-y)==div)
                cout<<x<<" "<<x-div<<endl;
            else
                cout<<"impossible"<<endl;
        }
    }
    return 0;
}
