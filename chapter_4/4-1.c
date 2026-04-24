#include <stdio.h>

int main()
{
	char fruit_name[10] = "Banana";

	printf("What is your favorite fruit?\n");

	scanf("%s", fruit_name);

	printf("You like %s\n", fruit_name);

	return 0;
}