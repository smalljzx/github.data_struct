#include "stack.h"
int main()
{
	SqStack s;
	initStack(&s);
	push(&s, 'A');
	push(&s, 'b');
	push(&s, 'C');
	push(&s, 'd');
	push(&s, 'D');
	while (!isEmpty(&s))
	{
		StackElemType e;
		Pop(&s, &e);
		printf("%c\n", e);
	}
	return 0;
}