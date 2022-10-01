#include <stdio.h>

#define MAX 1000

int getLine(char line[]);
void reverse(char line[], int len);

int main(int argc, char const *argv[])
{
    int len;
    char line[MAX];

    while ((len = getLine(line)) > 0) {
        printf("line: %slen: %d\n", line, len);
        reverse(line, len);
        printf("reverse: %s", line);
    }

    return 0;
}

int getLine(char line[]) {
    int c;
    int i = 0;

    for (i = 0; i < MAX - 1 && (c = getchar()) != '\n' && c != '!'; i++) {
        line[i] = c;
    }

    if (c == '\n') {
        line[i] = c;
        i++;
    }

    line[i] = '\0';
    return i;
}

void reverse(char line[], int len) {
    for (int i = 0; i < (len - 1) / 2; i++)
    {
        char temp = line[len - 2 -  i];
        line[len - 2 - i] = line[i];
        line[i] = temp;
    }

    line[len - 1] = '\n';
}