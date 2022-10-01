#include <stdio.h>

#define TAB_LENGTH 8

int main(int argc, char const *argv[])
{
    int c;

    while ((c = getchar()) != '\n') {
        if (c == '\t') {
            for (int i = 0; i < TAB_LENGTH; i++)
            {
                putchar(' ');
            }
        } else {
            putchar(c);
        }
    }

    return 0;
}