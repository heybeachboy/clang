#include <stdio.h>

const int MAX = 11;

int main(int argc, char * argv[]) {
    int list[] = {10, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    int i, j, *p;

    p = list;
    for( i = 0; i < MAX; i++) {
        printf("list[%d], point=%p, value=%d \n", i, p, *p);
	p++;
    }
    
    printf("\n\n");
    p = &list[MAX-1];
    
    for( j = MAX - 1; j >= 0; j--) {
        printf("list[%d], point=%p, value=%d \n", j, p, *p);
        p--;	
    }

    return 0;	
}
