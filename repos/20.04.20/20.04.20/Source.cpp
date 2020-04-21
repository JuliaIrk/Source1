#include <stdio.h>

struct List {
	int pole1;
	List* next;
};
typedef List Stack;

void StackInit(Stack*&);
void StackPush(Stack*&, List*);
void StackPull(Stack*&, List*&);
void StackPrint(Stack*);
void ListPrint(List*);
bool StackIsEmpty(Stack*);
void StackClear(Stack*&);
bool StackFind(Stack*, List*);
int StackCount(Stack*);

int main() {
	Stack* S=NULL;
	List* p=NULL;

	printf_s(">>>Init\n");
	StackInit(S);
	StackPrint(S);
	printf_s("Count=%d\n", StackCount(S));

	printf_s(">>>Pull\n");
	StackPull(S, p);
	ListPrint(p);
	StackPrint(S);
	printf_s("Count=%d\n", StackCount(S));

	delete  p;
	p = new List;
	p->pole1 = 8;

	printf_s(">>>Push\n");
	StackPush(S, p);
	StackPrint(S);
	printf_s("Count=%d\n", StackCount(S));

	p = new List;
	p->pole1 = 7;
	if (StackFind(S, p)) {
		printf_s("found %d\n", p->pole1);
	}
	else {
		printf_s("not found %d\n", p->pole1);
	}

	p->pole1 = 2;
	if (StackFind(S, p)) {
		printf_s("found %d\n", p->pole1);
	}
	else {
		printf_s("not found %d\n", p->pole1);
	}

	if (StackIsEmpty(S)) {
		printf_s("is empty\n");
	}
	else {
		printf_s("is not empty\n");
	}

	printf_s(">>>Clear\n");
	StackClear(S);

	printf_s("Count=%d\n", StackCount(S));

	if (StackIsEmpty(S)) {
		printf_s("is empty\n");
	}
	else {
		printf_s("is not empty\n");
	}

}

void StackInit(Stack* &S) {
	List* p = NULL;
			
	for (int i = 0; i < 5; i++) {
		p = new List;
		p->pole1 = i;
		StackPush(S, p);
	}
}

void StackPush(Stack* &S, List* p) {

	if (S == NULL) {
		S = p;
		S->next = NULL;
	}
	else {
		p->next = S;
		S = p;
	}
}

void StackPull(Stack* &S, List* &p) {

	p = S;
	if (S != NULL) {
		S = S->next;
	}
}

void StackPrint(Stack* S) {
	printf_s("Stack:\n");
	while (S != NULL) {
		printf_s("%d\n", S->pole1);
		S = S->next;
	}
	printf_s("------\n");
}

void ListPrint(List* p) {
	if (p != NULL) {
		printf_s("List=%d\n", p->pole1);
	}
	else printf_s("List=Null\n");
	printf_s("------\n");
}

bool StackFind(Stack* S, List *p) {
	bool bFind = false;
	while ((S != NULL) and !bFind) {
		if (S->pole1 == p->pole1) {
			bFind = true;
		}
		S = S->next;
	}
	return(bFind);
}

int StackCount(Stack* S) {
	int n = 0;
	while (S != NULL) {
		n++;
		S = S->next;
	}
	return (n);
}

bool StackIsEmpty(Stack* S) {
	return (S == NULL);
}

void StackClear(Stack*& S) {
	List* p;
	while (S != NULL) {
		p = S;		
		S = S->next;
		delete p;
	}
}
