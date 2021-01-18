#include <stdio.h>

int main(int argc, char * argv[]) {

    
	int year;
	printf("Please input year:");
	scanf("%d", &year);
	if(year % 4 == 0) {
            printf("%d 是闰年\n", year);
	    return 0;
	}

	if(year % 100 == 0) {
	    printf("%d 是闰年\n", year);
	    return 0;
	}
       
        if(year % 400 == 0) {
	    printf("%d 是闰年\n", year);
	    return 0;  
	}	
	printf("%d 不是闰年\n", year);
}
