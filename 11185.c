#include <stdio.h>
int main()
{
    long long int remember, base, ternary;
    long long n;
    while(1){
        ternary = 0;
        remember = 0;
        base = 1;
        scanf("%lld", &n);
        if(n<0)
            break;
        while(n > 0)
        {
            remember = n % 3;
            ternary = ternary + remember * base;
            n /= 3;
            base = base * 10;
        }
        printf("%lld\n",ternary);
    }
return 0;
}
