#define _USE_MATH_DEFINES
#include <iostream>
#include <stdio.h>
#include <chrono>
#include <locale.h>
#include <cmath>
#include <conio.h>

double CountPi(__int64 n)
{
	double pi = 0;
	__int64 i;
	int p = -1;

	auto begin = std::chrono::steady_clock::now();

	for (i = 0; i <= n; i++)
	{
		p *= -1;
		pi += 4.0 * p / (2 * i + 1);
	}

	auto end = std::chrono::steady_clock::now();
	auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
	std::cout << "Затраченное время: " << elapsed_ms.count() << " ms\n";

	return pi;
}

int main()
{

	setlocale(LC_CTYPE, "Russian");
	__int64 n = 0;
	printf_s("Введите число N первых членов: ");
	scanf_s("%lld", &n);
	printf_s("Число Пи (результат): %.16f\n", CountPi(n));
	printf_s("Число Пи (константа): %.16f\n", M_PI);
	_getch();
	return 0;

}