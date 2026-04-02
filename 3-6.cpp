#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
    unsigned int u_min = 0;
    //unsigned int i = 0b11111111111111111111111111111111;
    unsigned int u_max = UINT_MAX;

    char buffer[33];

    _itoa(u_max, buffer, 2);
    printf("decimal: %u\n", u_max);
    printf("binary: %s\n", buffer);

    _itoa(u_max + 1, buffer, 2);
    printf("decimal: %u\n", u_max + 1);
    printf("binary: %s\n", buffer);

    _itoa(u_min, buffer, 2);
    printf("decimal: %u\n", u_min);
    printf("binary: %s\n", buffer);

    _itoa(u_min - 1, buffer, 2);
    printf("decimal: %u\n", u_min - 1);
    printf("binary: %s\n", buffer);

    signed int i_min = INT_MIN;
    signed int i_max = INT_MAX;

    printf("%u\n", u_min);
    printf("%u\n", u_max);

    printf("%d\n", i_min);
    printf("%d\n", i_max);

    printf("%zu\n", sizeof(unsigned int));
    printf("%zu\n", sizeof(u_max));
}