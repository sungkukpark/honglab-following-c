#include <stdio.h>
#include <stdlib.h>	// malloc()

struct MyStruct	// sizeof: 12 bytes in total
{
	int i;
	float f;
	char c;		// Alignment 때문에 4 bytes 차지.
};

int main()
{
	// 1. sizeof(basic types)
	int a = 0;
	unsigned int int_size_1 = sizeof a;
	unsigned int int_size_2 = sizeof(int);
	unsigned int int_size_3 = sizeof(a);

	printf("Size of int type is %u bytes.\n", int_size_1);
	printf("Size of int type is %u bytes.\n", int_size_2);
	printf("Size of int type is %u bytes.\n", int_size_3);
	
	size_t int_size_4 = sizeof(a);
	size_t float_size = sizeof(float);

	printf("Size of int type is %zu bytes.\n", int_size_4);
	printf("Size of float type is %zu bytes.\n", float_size);

	// 2. sizeof arrays

	int int_arr[30] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* int_ptr = NULL;
	int_ptr = (int*)malloc(sizeof(int) * 30);

	printf("Size of array = %zu bytes.\n", sizeof(int_arr));
	printf("Size of pointer = %zu bytes.\n", sizeof(int_ptr));

	char char_arr[30] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	char* char_ptr = NULL;
	char_ptr = (char*)malloc(sizeof(char) * 30);

	printf("Size of array = %zu bytes.\n", sizeof(char_arr));
	printf("Size of pointer = %zu bytes.\n", sizeof(char_ptr));

	// 3. sizeof character array
	char c = 'a';
	char str[10]; // maximally 9 character + '\0' (null character)

	size_t char_size = sizeof(char);
	size_t str_size = sizeof(str);

	printf("Size of char type is %zu bytes.\n", char_size);
	printf("Size of string type is %zu bytes.\n", str_size);

	// 4. sizeof structure
	printf("Size of MyStruct type is %zu bytes.\n", sizeof(struct MyStruct));

	return 0;
}