#include<stdio.h>
int main()
{
    long int i,j,a;
    while(scanf("%ld",&i)!=EOF & scanf("%ld",&j)!=EOF){
        if(i>j){
            a=i-j;
        }
        else{
            a=j-i;
        }
        printf("%ld\n",a);
    }
    return 0;
}
