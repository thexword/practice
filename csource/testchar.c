#include <stdio.h>

/*
读一个字符
while（该字符不是文件结束指示符）
    输出刚读入的字符
    读下一个字符
*/
/*
int main() {
    int ch = getchar();

    while (ch != EOF) {
        putchar(ch);
        ch = getchar();
    }
    
    return 0;
}
*/

/*
优化
*/
int main() {
    int ch;

    printf("%d\n", (getchar() != '5'));

    printf("EOF: %d", EOF);
    
    while ((ch = getchar()) != EOF)
    {
        putchar(ch);
    }

    return 0;
}