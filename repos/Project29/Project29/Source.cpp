//���� �������� ������������������ ����(�� ����� 50), � ������ ����� �� ����� ������ ��������.
//����� ��������� ��������, �� ��������� ������ �����.
//����� �� �����, ������� ���������� �� ���������� ����� � ������������� ���������� ������� : ����� �����������.



#include<stdio.h>
#include<conio.h>
#include<locale.h>

const int M = 51;
const int N = 9;

void main(void) {
	setlocale(LC_ALL, "Russian");
	char a[M][N];
	int i, j;
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			printf_s("a[%d][%d] = ", i, j);
			scanf_s("%c", &a[i][j]);
		}
	}

}