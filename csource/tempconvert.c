#include <stdio.h>

float convertFahrToCelsius(float fahr);

int main(int argc, char const *argv[])
{
    for (float fahr = 0; fahr <= 300; fahr += 20)
    {
        printf("%3.0f%6.1f\n", fahr, convertFahrToCelsius(fahr));
    }
    
    
    return 0;
}

float convertFahrToCelsius(float fahr) {
    return (5.0 / 9.0) * (fahr - 32);
}
