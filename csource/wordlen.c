#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int c;
    int nlen[10];
    int i;
    for (i = 0; i < 10; ++i) {
        nlen[i] = 0;
    }

    int len = 0;
    int status = OUT;

    while ((c = getchar()) != '\n') {
        if (c == ' ' || c == '\t') {
            if (status == IN && len < 10) {
                nlen[len]++;
            }
            len = 0;
            status = OUT;
        } else {
            len++;
            status = IN;
        }
    }

    if (status == IN && len < 10 && len >= 0) {
        nlen[len]++;
    }

    for (i = 0; i < 10; ++i) {
        printf("  %d", nlen[i]);
    }

    return 0;
}