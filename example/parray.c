#include <stdio.h>

int main(int argc, char * argv[]) {

    int list[] = { 1, 2, 3, 4, 5, 6, 7};
    int *p[] = { list, list+1, list+2, list+3, list+4, list+5, list+6 };
    for(int i = 0; i < 7; i++) {
        printf("%d\n", *(p[i]));
    }	
}
