#include <stdio.h>
#include <stdlib.h>  // for malloc/free; omitting this truncates the 64-bit pointer, causing an access violation
#include <string.h>
#include <assert.h>
#include "../string/rb_string.h"
#include <sal.h>  // for SAL annotations (e.g. _Check_return_) used in rb_strlen

int main()
{
	char str1[100] = "Hello";	// 5
	char str2[] = "Hello";		// 5
	char str3[100] = "\0";		// 0
	char str4[100] = "\n";		// 1

	//rb_strlen("test");

	assert(rb_strlen(str1) == strlen(str1));
	printf("%zu\n", rb_strlen(str1));
	printf("%zu\n", rb_strlen(str2));
	printf("%zu\n", rb_strlen(str3));
	printf("%zu\n", rb_strlen(str4));

	// Extra
	char *str5 = (char*)malloc(sizeof(char) * 100);
	str5[0] = 'H';
	str5[1] = 'e';
	str5[2] = 'l';
	str5[3] = 'l';
	str5[4] = 'o';
	str5[5] = '\0';

	// sizeof(str5) == 8: pointer size in 64-bit, not the string length
	printf("%zu %zu\n", sizeof(str5), rb_strlen(str5));  

	free(str5);

	return 0;
}