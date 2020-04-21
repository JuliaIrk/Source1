#include <stdio.h>
#include <locale>

int guiltyPoints(int);
int main()
{
	setlocale(LC_ALL, "Rus");
	int a;
	printf_s("¬ведите числа:\n");
	scanf_s("%d", &a);
	guiltyPoints(a);

}
int guiltyPoints(int a)
{
if (a < 60) {                   
	printf("0");  
}
else if ((a > 59)&(a < 70)) {             
	printf("1"); 
}
else if ((a > 69)&(a < 80)){
	printf("2");   
}
else if ((a > 79) & (a < 90)) {
	printf("3");
}
else {
	printf("4");  
}
return 0;
}