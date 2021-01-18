#include <stdio.h>

int main(int argc, char *argv[]) {
	char c = 'a';
	printf("%c, size(char)=%ld, size('a')=%ld;\n", c, sizeof(c), sizeof('a'));
	printf("int size=%ld;\n", sizeof(1));
	printf("unsigned int size=%ld;\n", sizeof(1U));
	printf("long size=%ld;\n", sizeof(1L));
	printf("long long size=%ld;\n", sizeof(1LL));
	printf("unsigned long long size=%ld;\n", sizeof(1ULL));
	printf("float %lf size=%ld\n", 1.F, sizeof(1.F));
	printf("double %lf size=%ld\n", .123, sizeof(.123));
	printf("long double %Lf size=%ld\n", 1.234L, sizeof(1.234L));

}
