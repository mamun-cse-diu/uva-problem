#include <iostream>

using namespace std;

int main()
{
    int n,sum = 0,m,a;
    for (int i=0; i<10; i++){
        sum = 0;
        cin>>n;
        if(n==0)
            break;
        while(n>=3){
            m = n%3;
            a = n/3;
            sum += a;
            n = m+a;
            //cout<<sum<<endl;
        }
        if(n==2)
            sum++;
        cout<<sum<<endl;
    }
    return 0;
}
