#include <stdio.h>

int main(int agrc, char *argv[]) {

	int x = 123456, *p = &x;
	int px = *p;

	printf("%p, %p, %d\n", p, px, px);

	return 0;

}
