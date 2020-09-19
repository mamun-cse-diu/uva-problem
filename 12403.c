#include <stdio.h>
#include <string.h>
int main() {
    int n, sum = 0, x;
    char str[20];
    scanf("%d", &n);
    while(n--) {
        scanf("%s", str);
        if(!strcmp(str, "donate")) {
            scanf("%d", &x);
            sum += x;
        } else {
            printf("%d\n", sum);
        }
    }
    return 0;
}
