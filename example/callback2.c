#include <stdio.h>

void callback(unsigned int * x) {
    *x *= 100;
}

int main(int argc, char *argv[]) {
    void (*c)(unsigned int*) = NULL;
    c = callback;
    unsigned int i;
    printf("Please one number:");
    scanf("%d", &i);
    c(&i);
    printf("result is %d\n", i);
    return 0;   
    
}
