#include <stdio.h>
#include <conio.h>
#include <iostream>


struct list {
	int pole1;
	list* pole2;
};
typedef list stack;

void ClearStack(stack *S);
stack *PushStack(stack* S, int A);
bool PullStack(stack* S, int& A);
bool IsEmptyStack(stack* S);
void printStack(stack* S);

void main(){
	stack *S;
	int A;
	S = NULL;
	for (int i = 0; i < 10; i++) {
		S = PushStack(S, i);
	}

	printStack(S);
	PullStack(&S, A);
	printStack(S);

}


void ClearStack(stack *S) {
	list* p;
	p = S;
	while (p != NULL) {
		p = p->pole2;
		delete S;
		S = p;
	}
	
}

stack *PushStack(stack *S, int A) {
	
	list *p;
	p = new list;
	p->pole1 = A;
	if (S == NULL) {
		S = p;
		S->pole2 = NULL;
	}
	else
	{
		p->pole2 = S;
		S = p;
	}	
	return (S);
}

bool PullStack(stack &S, int &A) {
	list *p;
	if (S != NULL) {
		A = S->pole1;
		p = S;
		S = S->pole2;
		delete p;
		return(true);
	}
	else return(false);
}

bool IsEmptyStack(stack *S) {
	if (S == NULL) {
		return(true);
	}
	else
	{
		return(false);
	}
}
void printStack(stack* S) {
	list* p;
	p = S;
	while (p != NULL) {
		printf_s("%d\n", p->pole1);
		p = p->pole2;		
	}

}











