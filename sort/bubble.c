#include <stdio.h>


void bubble_sort(int list[], int len) {
     int i, j, tmp;	
     for(int i = 0; i < len; i++) {

         for(j = 0; j < len - 1 - i; j++) {
             if(list[j] > list[j+1]) {
                 tmp = list[j];
		 list[j] = list[j+1];
	         list[j+1] = tmp;	 
	     }
	 }
     }
}

int main(int argc, char * argv[]) {
    int list[] = { 22, 45, 76, 78, 76, 12, 45, 65, 18, 19, 23, 99 };
    int len = (int)(sizeof(list) / sizeof(int));
    bubble_sort(list, len);
    
    int x;
    for (x = 0; x < len; x++) {
        printf("%3d", list[x]);
    }
    printf("\n");
    return 0;
}
