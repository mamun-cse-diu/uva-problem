#include<stdio.h>
int main()
{
    int n,i,a,b;
    while(scanf("%d\n",&n) != EOF){
        i=1;
        while(i<=n){
            scanf("%d",&a);
            scanf("%d",&b);
            if(a<b){
                printf("<\n");
            }
            else if(a>b){
                printf(">\n");
            }
            else{
                printf("=\n");
            }
            i++;
        }
    }
    return 0;
}
