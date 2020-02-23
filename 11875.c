#include<stdio.h>
int main()
{
    int a,i,j,k,n,x[14];
    a=1;
    scanf("%d",&k);
    for(i=k; i>0; i--){
        scanf("%d",&n);
        for(j=n; j>0; j--){
            scanf("%d",&x[j]);
        }
        j=n/2;
        j=j+1;
        printf("Case %d: %d\n",a,x[j]);
        j=0;
        a++;
    }
    return 0;
}
