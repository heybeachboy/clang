#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	enum color { red=1, green, blue, pink, purple };

	enum color favorite_color;
	printf("Please input color what you like color:\n");
	printf("1. red, 2. green, 3. blue, 4. pink, 5. purple\n");
	scanf("%u", &favorite_color);

	switch(favorite_color) {
		case red:
			printf("you like red\n");
			break;
                case green:
                        printf("you like green\n");
                        break;
                case blue:
                        printf("you like blue\n");
                        break;
                case pink:
                        printf("you like pink\n");
                        break;
		case purple:
	                printf("you like purple\n");
	                break;
	        default:
	                printf("unknow color: %u\n",favorite_color);
	                break;		
	}
}	
