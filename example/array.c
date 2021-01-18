#include <stdio.h>

int main(int argc, char * argv[]) {
        
	int list[100];
	int i,j;
	for(i=0; i < 100; i++) {
		list[i] = i + 10;
	}

	for(j=0; j < 100; j++) {
		printf("lits[%d]=%d\n", j, list[j]);
	}
	return 0;
}
