#include<stdio.h>
int main()
{
     int i,j,a=0,b,n;
     scanf("%d",&n);
          for(b=1; b<=n; b++){
               scanf("%d %d",&i,&j);
               while(i<=j){
                    if(i%2!=0){
                       a=a+i;
                    }
                    i++;
               }
               printf("Case %d: %d\n",b,a);
               a=0;
          }
     return 0;
}
