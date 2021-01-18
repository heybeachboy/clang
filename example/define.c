#include <stdio.h>
#define test() ({     \
     char _str = 'b'; \
     _str * 2;        \
     _str;})

int main(int argc, char *argv[]) {
    int a = test();
    printf("%d, %c\n",a, a);
    printf("FILE :%s\n", __FILE__);
    printf("Date :%s\n", __DATE__);
    printf("Time :%s\n", __TIME__);
    printf("ANSI :%d\n", __STDC__);
    return 0;
}
