#include <conio.h>
#include <stdio.h>
#include<locale.h>
#include <cmath> 
#include <time.h> 

float MyPI(int N);

int main() {
	int  N = 30000000;
	clock_t t_start, t_end;
	double seconds;

	t_start = clock();
	printf_s("%f\n", MyPI(N));
	t_end =clock();	
	seconds = ((float)(t_end - t_start)) / CLOCKS_PER_SEC;
	printf_s("%f\n", seconds);

	//_getch();
}

	
float MyPI(int  N) {
	int i;
	float mpi = 0;
	for (i = 0; i < N; i++) {
		mpi = mpi + (4 * pow(-1, i ))/ (2 * i + 1);
	}
	return(mpi);
}
	







