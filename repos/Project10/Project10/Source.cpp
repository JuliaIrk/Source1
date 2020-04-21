#include <stdio.h>
#include <locale>

void PowerA234(float, float, float, float);
const int N = 5;
float b, c, d = 1;
int main()
{
	float f[N];
	


	setlocale(LC_CTYPE, "Russian");

	
	printf_s("¬вод элементов массива f:\n");
	for (int i = 0; i < N; i++)
	{

		scanf_s("%f", &f[i]);
	}

	
	float a;
	for (int i = 0; i < N; i++)
	{
		a = f[i];
		PowerA234(a, b, c, d);
		printf_s("\n");
	}
	
}

void PowerA234(float a, float b, float c, float d)
{
	b = a * a;
	c = b * a;
	d = c * a;
	printf_s("%f %f %f", b, c, d);
}