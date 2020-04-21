#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <string>
#include <windows.h>

int IsSymmetricStr(char s[]);//проверка симметричности


const int M = 50;
const int N = 8;
void main()
{
	char A[M][N];
	int k, i, j;


	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	


	printf_s("\n ¬ведите последовательность: ");
	
		
	
	i = 0; j = 1;
	while ((i<M) && (j==1))
	{
		scanf_s("%s", A[i], N);
		if (A[i][strlen(A[i]) - 1] == '.') { j = 0; }
		i++;
	}
	i--;
	if (A[i][strlen(A[i]) - 1] == '.') { A[i][strlen(A[i]) - 1] = '\0'; }
	
	k = i;
	for (i = 0; i < k; i++) {
		if (strcmp(A[i], A[k]) != 0) {
			if (IsSymmetricStr(A[i]) == 1) {
				printf_s("%s ", A[i]);
			}
			
		 } 
		

		
	}
	printf_s("\n");
}

int IsSymmetricStr(char s[]) {
	int b=1;
	int i=0,k;
	k = strlen(s);
	
	while ((i < k/2)  &&  (b == 1)) {
		if (s[i] != s[k - i - 1]) { b = 0; }

		i++;

	}
	return (b);
}
