#include <stdio.h>

void main() {
	struct list {
		bool a;
		float *b;
		struct list *c;
	};
	list* r = new list;
	r->a = false;
	r->b = new float(2.7);
	r->c = NULL;



}