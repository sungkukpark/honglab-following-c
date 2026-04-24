#include <stdio.h>

int main()
{
	// 일반적인 배열
	int a = 1;
	int int_arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	printf("%i %i %i\n", int_arr[0], int_arr[1], int_arr[9]);	// 0 1 9

	printf("%i\n", int_arr[10]);

	// 문자열 배열
	char c = 'a';
	char str1[10] = "Hello";
	char str2[10] = { 'H', 'i' };

	printf("%c\n", c);
	printf("%s\n", str1);
	printf("%s\n", str2);

	printf("%hhi %hhi %hhi %hhi %hhi\n",
		str2[0], str2[1], str2[2], str2[3], str2[4]);
	
	for (int i = 0; i < sizeof(str2) / sizeof(char); ++i)
	{
		printf("%c_\n", str2[i]);
	}

	//char str3[12] = "Hello, World";	// array size is not enough
	char str3[20] = "Hello, \0World";
	printf("%s\n", str3);

	for (int i = 0; i < sizeof(str3) / sizeof(char); ++i)
	{
		printf("%c_\n", str3[i]);
	}

	return 0;
}