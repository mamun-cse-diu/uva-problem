#include<stdio.h>
int main()
{
    int n,i,a,b,c,j=1;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
            if((a<b && b<c)||(a>b && b>c)){
                printf("Case %d: %d\n",j,b);
            }
            else if((b<a && a<c)||(b>a && a>c)){
                printf("Case %d: %d\n",j,a);
            }
            else{
                printf("Case %d: %d\n",j,c);
            }

        j++;
    }
    return 0;
}
