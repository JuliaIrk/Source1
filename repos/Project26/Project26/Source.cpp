//���� ������������� ����� A � B (A > B).
//�� ������� ����� A ��������� ����������� ��������� ���������� �������� ����� B (��� ���������).
//�� ��������� �������� ��������� � �������, ����� ���������� �������� B, ����������� �� ������� A.

#include <stdio.h>
#include <locale.h>
#include <conio.h>




int main()
{
	setlocale(LC_ALL, "Russian");
	int n=0;
	float A, B;
	printf_s("������� ����� ������� �:");
	scanf_s("%f", &A);
    printf_s("������� ����� ������� �,�<A:");
	scanf_s("%f", &B);
	while (A >= B) {
		A = A - B;
		n = n + 1;

	}
	printf_s("n=%d", n);

}