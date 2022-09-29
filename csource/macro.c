#include <stdio.h>

#define LOWER 20
#define UPPER 300
#define STEP 20

int main() {
    float cur, target;

    for (cur = LOWER; cur <= UPPER; cur += STEP) {
        printf("%3.0f\t%6.1f\n", cur, 5.0 / 9.0 * (cur - 32));
        /* code */
    }
    
    return 0;
}