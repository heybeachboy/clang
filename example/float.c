#include <stdio.h>
#include <float.h>

int main(int argc, char *argv[]) {

	printf("float max bytes: %lu \n", sizeof(float));
	printf("float max: %E\n", FLT_MIN);
	printf("float min: %E\n", FLT_MAX);
	printf("最大精度: %d\n", FLT_DIG);
return 0;	
}
