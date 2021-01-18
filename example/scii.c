#include <stdio.h>

int main(int argc, char *argv[]) {

   char c;
   printf("Please input char: ");
   scanf("%c", &c);
   printf("%c 's ASCII is %d\n",c, c);
   return 0;
}
