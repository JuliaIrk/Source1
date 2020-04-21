#include <stdio.h>
#include <locale>

void guiltyPoints;
int main()
{
	setlocale(LC_ALL, "Rus");
	int a;
	printf_s("¬ведите числа:\n");
	scanf_s("%d", &a);
	guiltyPoints(a);
	return(5)
}

void guiltyPoints(int a)
{
	if (a > 89)& (a < 101)
		printf_s("5");
}