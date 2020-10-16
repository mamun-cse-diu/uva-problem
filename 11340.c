#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;

    scanf("%d%*c", &t);

    while (t--) {
        long char_paid[256] = {};
        union {
            unsigned char u[10001];
            char s[10001];
        } line;

        fgets(line.s, 10001, stdin);

        long k = strtol(line.s, NULL, 10);

        while (k--) {
            fgets(line.s, 10001, stdin);
            char_paid[line.u[0]] = strtol(line.s + 2, NULL, 10);
        }

        fgets(line.s, 10001, stdin);

        k = strtol(line.s, NULL, 10);

        long ans = 0;

        while (k--) {
            fgets(line.s, 10001, stdin);

            unsigned char * c;
            for (c = line.u; *c; ++c)
                ans += char_paid[*c];
        }

        printf("%ld.%02ld$\n", ans / 100, ans % 100);
    }

    return 0;
}
