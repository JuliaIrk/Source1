#include <stdio.h>
#include <locale>

void PowerA234(float, float, float, float);
const int Nmax = 6;
float b, c, d = 1;
int main()
{
	float f[Nmax];
    int N = 1;
   

	setlocale(LC_CTYPE, "Russian");



	printf_s("¬вод элементов массива f:\n");
	for (int i = 0; i < 6; i++)
   {

		scanf_s("%f", &f[i]);
	}

	//printf_s("¬вод элементов массива f:\n");
	//setlocale(LC_CTYPE, "Russian");
	
	//printf_s("¬ведите числа:\n");
    // scanf_s("%f", &a);
	float a;
	for (int i = 0; i < N; i++)
	{
		a = f[i];
		PowerA234(a, b, c, d);
	}
	//return 0;
}

void PowerA234(float a, float b, float c, float d)
{
	b = a * a;
	c = b * a;
	d = c * a;
	printf_s("%f %f %f", b, c, d);
}