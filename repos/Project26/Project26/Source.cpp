//Даны положительные числа A и B (A > B).
//На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений).
//Не используя операции умножения и деления, найти количество отрезков B, размещенных на отрезке A.

#include <stdio.h>
#include <locale.h>
#include <conio.h>




int main()
{
	setlocale(LC_ALL, "Russian");
	int n=0;
	float A, B;
	printf_s("Введите длину отрезка А:");
	scanf_s("%f", &A);
    printf_s("Введите длину отрезка В,В<A:");
	scanf_s("%f", &B);
	while (A >= B) {
		A = A - B;
		n = n + 1;

	}
	printf_s("n=%d", n);

}