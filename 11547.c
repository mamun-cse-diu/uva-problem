#include<stdio.h>
#include<math.h>
int main()
{
     int n,i,a,b;
     scanf("%d",&n);
     for(i=1; i<=n; i++){
          scanf("%d",&a);
          a=a*567;
          a=a/9;
          a=a+7492;
          a=a*235;
          a=a/47;
          a=a-498;
          a=a/10;
          a=a%10;
          if(a<0){
               a=a*(-1);
          }
          printf("%d\n",a);
     }
     return 0;
}
