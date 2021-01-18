#include <stdio.h>

void func1(void);

static int count = 100;

int main(int argc, char *argv[]) {
	while(count--) {
		func1();
	}
	return 0;

}

void func1(void) {
	static int thingy = 5;
	thingy++;
	printf("thingy = %d, count = %d\n", thingy, count);

}
