#include <stdio.h>

int main(int argc, char *argv[]) {
	int x = 023;
	int y = 0x0E;
	printf("x = %d, y = %d \n", x, y);

	char c = 0x61;
	char c2 = 'a';
	char c3 = '\x61';

	printf("%c, %c, %c\n", c, c2, c3);
}
