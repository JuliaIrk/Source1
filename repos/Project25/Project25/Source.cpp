//���� ����� �����.���� ��� �������� �������������, �� ��������� � ���� 1, � ��������� ������ ������� �� ���� 2. ������� ���������� �����.//

#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <iostream>



int main(int)
{
	setlocale(LC_ALL, "Russian");
	int a;
	printf_s("������� ���������� � :");
	scanf_s("%d", &a);
	if (a >= 0) {
		a = a + 1;
	}
	else {
		a = a - 2;
	}
	printf_s("a = %d ", a);

}