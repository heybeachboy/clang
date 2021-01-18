#include <stdio.h>

int main(int argc, char * argv[]) {
        if(argc != 2) {
		printf("input a char\n");
		return 0;
	}
        

	switch(*argv[1]) {
		case 'a' ... 'z': printf("a-z\n"); break;
                case 'A' ... 'Z': printf("A-Z\n"); break;
	        case '0' ... '9': printf("0-9\n"); break;
	        default: printf("you input default: %c\n",*argv[1]); break;			  
	}				  

	return 0;
}
