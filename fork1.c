#include <stdio.h>

void main()
{
	int i;

	if (fork()) {
		for (i=0; i<10;i++)
			printf("**   PARENT %d\n", i);
	} else {
		for (i=0; i<10;i++)
			printf("**   CHILD %d\n", i);

	}
}
