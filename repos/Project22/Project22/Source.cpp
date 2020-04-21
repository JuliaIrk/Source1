#include <stdio.h>
#include <conio.h>

struct doubleList
{
	char symb;
	doubleList* pred;
	doubleList* sled;
};

doubleList* readIt(doubleList* p)
{
	char ch;
	doubleList* prev, * next;
	prev = p;
	next = p;
	ch = getchar();
	p->symb = ch;
	p->pred = NULL;
	prev = p;
	next = p;
	while ((ch = getchar()) != '.')
	{
		next->sled = new doubleList;
		next = next->sled;
		next->symb = ch;
		next->pred = prev;
		prev = next;
	}
	next->sled = NULL;
	return next;
}

void mirrorList(doubleList* p)
{
	doubleList* first;
	first = p->pred;
	while (first)
	{
		p->sled = new doubleList;
		p = p->sled;
		p->symb = first->symb;
		first = first->pred;
	}
	p->sled = NULL;
}

void main()
{
	doubleList* p = new doubleList;
	doubleList* ends = readIt(p);
	mirrorList(ends);
	while (p)
	{
		printf_s("%c", p->symb);
		p = p->sled;
	}
	_getch();
}
