#include<iostream>

 using namespace std;

 int main(void)
 {
    int n,sum;
    while(cin>>n){
        sum = n;
        while(n>=3){
            sum+=n/3;
            n = (n/3) + (n%3);
        }
        if(n==2){
            sum++;
        }
        cout<<sum<<endl;
    }
 }
