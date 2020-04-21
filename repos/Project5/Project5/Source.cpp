#include <stdio.h>
#include <conio.h>
#include <locale.h>

const int Nmax = 1000;
void main()
{
	float f[Nmax];
    int N = 1;
	setlocale(LC_CTYPE, "Russian");
	printf_s("¬ведите размер массива N, N >= 3:");
	scanf_s("%d", &N);
	printf_s("¬вод элементов массива f:\n");
		for (int i = 1; i <= N; i++)
		{
			printf_s("¬ведите элемент f[%d]:", i);
			scanf_s("%f", &f[i]);
		}
	float nMax = f[1], nMin = f[1], nSumma = f[1];
	float k = 0;
	for (int i = 2; i <= N; i++)
	{
		if (f[i] > nMax)
		{
			nMax = f[i];
		}
		if (f[i] < nMin)
		{
			nMin = f[i];
		}
		nSumma += f[i];

	}

	k = (nSumma - nMax - nMin) / (N - 2);
	printf_s("ќценка= %.4f", k );

}