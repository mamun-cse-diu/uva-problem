#include<stdio.h>
int main()
{
     float b=0,a=0,d,c=1,n,m,x[1200];
     int i=0,j;
     scanf("%f",&n);
     while(i!=n){
          scanf("%f",&m);
          a=0;
          for(j=1; j<=m; j++){
               scanf("%f",&x[j]);
               a=a+x[j];
          }
          b=a/m;
          c=0;
          for(j=1; j<=m; j++){
               if(b<x[j]){
                   c++;
               }
               d=(c/m)*100;
          }
          printf("%.3f%%\n",d);
          i++;
     }
     return 0;
}
