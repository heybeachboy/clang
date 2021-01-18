#include <stdio.h>

void test(const char ** x, int len) {

    for(int i = 0; i < len; i++) {

        printf("test: %d = %s\n", i, *(x + i));
    }   
}
int main(int argc, char * argv[]) {
    char * a = "aaa";
    char * b = "bbb";
    char * c = "ccc";
    const char * ss[] = { a, b, c };
    
    for(int i = 0; i < 3; i++) {
        printf("%d = %s ,point = %p, value = %d \n", i, ss[i], ss[i], *(ss[i]));
    }

    test(ss, 3);
    
}
