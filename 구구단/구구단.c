#include <stdio.h>

int main_1(void) {
	int i, j;

	for (i = 1; i <= 9; i++) {

		for(j=1; j<=9;j++)
		{
			printf("%d*%d=%d\t", j, i, i * j);
		}
		printf("\n");
	}

	return 0;

}//가나다라