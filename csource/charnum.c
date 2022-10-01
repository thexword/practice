#include <stdio.h>

int main(int argc, char const *argv[]) {
    int nchar[256];

    int i;
    for (i = 0; i < 256; i++) {
        nchar[i] = 0;
    }

    int c;

    while ((c = getchar()) != '\n') {
        nchar[c]++;
    }
    
    for (i = 0; i < 256; i++) {
        printf("\ni: %d\tnumber: %d", i, nchar[i]);
    }

    return 0;
}
