#include <stdio.h>

int main(int argc, char** argv)
{
	char c = 'A';
	char d = '*';

	//printf("%c %hhd\n", c, c);
	//printf("%c %hhd\n", d, d);

	printf("%c \n", c + 1);

	char a = '\a';
	//printf("%c", a);
	//printf("%d", a);

	//printf("\07");
	//printf("\x7");
	//printf("\x23");

	float salary;
	//printf("$______");
	//printf("$______\b\b\b\b\b\b");
	//scanf("%f", &salary);
	//printf("You eutered the salary: %.f", salary);

	printf("AB\tCDEF\n");
	printf("ABC\tDEF\n");

	printf("\\ \'HA+\' \"Hello\" \?\n");

	return 0;
}