#include <stdio.h>

int main(int argc, char * argv[]) {
    int c;
    for(;;) {
        c = getchar();
	if(c == '\n') {
		putchar('\n');
		break;
	}
        putchar(c);	

    }	    
return 0;
}
