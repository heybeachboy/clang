#include <stdio.h>

int main(int argc, char *argv[]) {
    float f, x = 3.14, y = 5.32;
    int i=4,a,b;
    a = x + y;
    b = (int)(x+y);
    f = 10/i;
    printf("a=%d,b=%d,f=%f,x=%f\n",a,b,f,x);
    return 0;
}
