#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
    printf("CHAR_BIT: %d\n", CHAR_BIT);
    printf("CHAR_MAX: %d\n", CHAR_MAX);
    printf("CHAR_MIN: %d\n", CHAR_MIN);
    printf("SCHAR_MAX: %d\n", SCHAR_MAX);
    printf("SCHAR_MIN: %d\n", SCHAR_MIN);
    printf("UCHAR_MAX: %u\n", UCHAR_MAX);

    printf("SHRT_MAX: %d\n", SHRT_MAX);
    printf("SHRT_MIN: %d\n", SHRT_MIN);
    printf("USHRT_MAX: %u\n", USHRT_MAX);

    printf("INT_MAX: %d\n", INT_MAX);
    printf("INT_MIN: %d\n", INT_MIN);
    printf("UINT_MAX: %u\n", UINT_MAX);

    printf("LONG_MAX: %ld\n", LONG_MAX);
    printf("LONG_MIN: %ld\n", LONG_MIN);
    printf("ULONG_MAX: %lu\n", ULONG_MAX);

    int x=020;
    printf("%d, %o, %x\n", x, x, x);
    
    return 0;
}
