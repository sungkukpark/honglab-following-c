#include <stdio.h>

#define SIZE_OF_BYTE 8

void print_binary(int num)
{
    for (int i = SIZE_OF_BYTE * sizeof(num) - 1; i >= 0; --i)
    {
        printf("%i", (num >> i) & 1);
        if (i % 4 == 0)
        {
            printf(" ");
        }
    }
    printf("\n");
}

int main()
{
    int num = 94;
    print_binary(num);

    float f = 1.0f;
    printf("size of %zu\n", sizeof(f));

    double d = 1.0;
    printf("size of %zu\n", sizeof(d));
}