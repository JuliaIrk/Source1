#include <stdio.h>

int main()
{
	char s[] = "ABCDEF";
	*s = 'X';
	char S = '2';
	printf_s("%s", s);
	getchar();
}