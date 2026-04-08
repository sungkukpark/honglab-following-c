#include <stdio.h>

int main(int argc, char argv[])
{
    int n1, n2, n3, n4;

    // 문법 오류(Syntax Error)
    //n5 = 3;

    n1 = 2;
    n2 = n1 * n1;
    n3 = n2 * n1;
    //n4 = n2 * n1;   // 문맥 오류 (Semantic Error)
    n4 = n3 * n1;

    printf("%i %i %i %i", n1, n2, n3, n4);

    return 0;
}