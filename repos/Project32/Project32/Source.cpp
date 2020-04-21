#include <stdio.h>

int main() {
	struct list {
		bool a;
		float* b;
		list* c;
	};
	struct list* r = new list;
	r->a = false;
	r->b = new float(2.7f);
	r->c = NULL;
	printf_s("%f", *(r->b));
	_getchar_nolock();

}