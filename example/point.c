#include <stdio.h>

int main(int argc, char *argv[]) {
    int var = 99;
    int *num = NULL;

    num = &var;
    printf("var of point = %p, num of point = %p, num value = %d \n", &var, num, *num);
}
