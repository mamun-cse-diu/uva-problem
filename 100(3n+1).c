#include<stdio.h>
int breaking(int);
int main()
{
    int a,b,m=0,i,ct=0,tmp;
    while(scanf("%d %d",&a,&b)==2 && a>0 && b>0){
        m=0;
        printf("%d ",a);
        printf("%d ",b);
        if(a>b){
            tmp=a;
            a=b;
            b=tmp;
        }
        for(i=a;i<=b;i++){
           ct = breaking(i);
           if (ct>m)
                m=ct;
        }

        printf("%d\n",m);
    }
    return 0;
}
int breaking(int n)
{
    int c=1;
    while(n!=1){
        if(n%2==0)
            n=n/2;
        else
            n=3*n+1;
        c=c+1;
    }
return c;
}

