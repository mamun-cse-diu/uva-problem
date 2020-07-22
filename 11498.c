#include <stdio.h>

int main() {
    int t, x, y, m, n;
    while(1){
        scanf("%d", &t);
        if(t==0)
            break;
        scanf("%d %d", &x, &y);
        while(t--) {
            scanf("%d %d", &m, &n);
            if(m == x || n == y)
                puts("divisa");
            else if(m > x && n > y)
                puts("NE");
            else if(m < x && n > y)
                puts("NO");
            else if(m < x && n < y)
                puts("SO");
            else
                puts("SE");
        }
    }
    return 0;
}
