#include<stdio.h>
int main()
{
    int i,j,sum;
    while(scanf("%d %d",&i,&j)!=EOF){
        sum=i;
        do{
            sum=sum+i/j;
           i=i/j+i%j;
        }while(i>=j);
        printf("%d\n",sum);
    }
    return 0;
}
