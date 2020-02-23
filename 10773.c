#include<stdio.h>
#include<math.h>
int main()
{
    float d,u,v,t1,t2,t;
    int n,i;
    i=1;
    scanf("%d",&n);
    while(n!=0){
        scanf("%f %f %f",&d,&v,&u);
        if(u<=v || u==0 || v==0){
            printf("Case %d: can't determine\n",i);
        }
        else{
            t1=d/u;
            u=sqrt((u*u)-(v*v));
            t2=d/u;
            t=t2-t1;
            printf("Case %d: %.3f\n",i,t);
        }
        n--;
        i++;
    }
    return 0;
}
