#include <stdio.h>

#define TAB_LENGTH 8
#define IS_TAB 1
#define NOT_TAB 0

int main(int argc, char const *argv[]) {
    int c;
    int status = NOT_TAB;

    while ((c = getchar()) != '\n') {
        if (c == '\t') {
            if (status == NOT_TAB) {
                for (int i = 0; i < TAB_LENGTH; i++) {
                    putchar(' ');
                }
            }
            status = IS_TAB;
        } else {
            putchar(c);
            status = NOT_TAB;
        }
    }

    return 0;
}