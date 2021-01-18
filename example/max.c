#include <stdio.h>

int max(int a, int b) {

	return a > b ? a : b;
}

int main(int argc, char *argv[]) {
    int (*p)(int,int) = max;
    int a, b, c;
    printf("please input three number:\n");
    scanf("%d,%d,%d", &a, &b, &c);

    printf("%d, %d, %d of max is : %d\n", a, b, c, p(p(a, b), c));
    return 0;
}
