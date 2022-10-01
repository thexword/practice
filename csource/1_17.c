#include <stdio.h>

#define MAX 1000

int getLine(char line[], int limit);

int main(int argc, char const *argv[])
{
    int len;
    char line[MAX];

    while ((len = getLine(line, MAX)) > 0) {
        if (len > 80) {
            printf("%s", line);
        }
    }

    return 0;
}

int getLine(char line[], int limit) {
    int c;
    int i;

    for (i = 0; i < limit - 1 && (c = getchar()) != '\n' && c != '!'; i++)
    {
        line[i] = c;
    }

    if (c == '\n') {
        line[i] = c;
        i++;        
    }

    line[i] = '\0';
    return i;
}