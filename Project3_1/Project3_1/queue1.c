#include "queue.h"
#include <stdio.h>
int main() {
	SqQueue Q;
	initQueue(&Q);
	entryQ(&Q, 'A');
	entryQ(&Q, 'B');
	entryQ(&Q, 'N');
	entryQ(&Q, 'M');
	printf("%d\n", length(&Q));
	QElemType e;
	while (!(isEmpty(&Q))) {
		OutQ(&Q, &e);
		printf("%c ", e);
	}
	system("pause");
	return 0;
}