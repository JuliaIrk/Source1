//ƒана последовательность символов, оканчивающа€с€ точкой.¬ конец после - довательности добавить все ее символы,
//располага€ их в обратном пор€дке(например, из последовательности 1, 2, 3 получить 1, 2, 3, 2, 1).


#include <stdio.h>
#include <conio.h>
#include<locale.h>


int main() {
	setlocale(LC_ALL, "Russian");
	struct list {
		char number;
		list* prev;
		list* next;
	};
	list* p, * temp, * r, * q;
	char ch;

	printf_s("¬ведите последовательность символов:");
	scanf_s("%c", &ch, 1);
	r = new list;
	r->number = ch;
	r->prev = NULL;
	r->next = NULL;
	p = r;

	while ((ch != '.') && (ch != '\n')) {
		scanf_s("%c", &ch, 1);
		if (ch != '.') {
			list* temp = new list;
			temp->number = ch;
			p->next = temp;
			temp->prev = p;
			temp->next = NULL;
			p = temp;
		}

	}

	q = p;
	while (q != NULL) {
		q = q->prev;
		if (q != NULL){
			list* temp = new list;
			temp->number = q->number;
			p->next = temp;
			temp->prev = p;
			temp->next = NULL;
			p = temp;
			}
	}
	p = r;
	while (p != NULL) {
		ch = p->number;
		printf_s("%c", ch);
		p = p->next;
	}

	_getch();

}