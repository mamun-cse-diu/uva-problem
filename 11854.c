#include<stdio.h>
int main()
{
    int i,j,k,a,b,c;
    while(1){
        scanf("%d %d %d",&i,&j,&k);
        if(i==0 || j==0 || k==0)
            break;

        a=i*i;
        b=j*j;
        c=k*k;

        if(c==a+b){
            printf("right\n");
        }
        else if(b==a+c){
            printf("right\n");
        }
        else if(a==c+b){
            printf("right\n");
        }
        else{
            printf("wrong\n");
        }
    }
    return 0;
}
