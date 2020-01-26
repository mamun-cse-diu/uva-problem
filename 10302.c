#include<stdio.h>
int main()
{
     long long int sum,a,i,n;
     while(scanf("%lld",&n)!=EOF){
          sum=0;
          for(i=1; i<=n; i++){
               a=i*i*i;
               sum=sum+a;
          }
     printf("%lld\n",sum);
     }
     return 0;
}
