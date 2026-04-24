#include <stdio.h>

//_Check_return_
//size_t __cdecl strlen(
//	_In_z_ char const* _Str
//);

_Check_return_
size_t __cdecl rb_strlen(const char* str)
{
	int count = 0;

	for (int i = 0; str[i] != '\0'; ++i)
	{
		++count;
	}

	return count;
}