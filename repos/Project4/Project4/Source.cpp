#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() //������ ��� ������ � �������������� � � �
{
	setlocale(LC_CTYPE, "Russian");
	unsigned int a, b, k = 0;
	printf_s("������� ����� ������� a:");
	scanf_s("%d", &a);
	printf_s("������� ����� ������� b:");
	scanf_s("%d", &b);
	if (b >= a) {
		while (b >= a) {
			b -= a;
			k += 1;
		}
	}
	printf_s("k = %d\n", k);
}
