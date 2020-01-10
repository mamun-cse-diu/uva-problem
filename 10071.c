#include<stdio.h>
int main()
{
    int i,j,a,b;
    while(scanf("%d %d",&i,&j)!=EOF){
        a=i*j;
        b=2*a;
        printf("%d\n",b);
    }
    return 0;
}
