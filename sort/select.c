#include <stdio.h>


void select_sort(int list[], int len) {

    for (int i = 0; i < len; i++) {
        int min = i;

	for(int j = i+1; j < len; j++) {
           if(list[j] < list[min]) {
	       min = j;	   
	}
	
	if(i != min) {
            int tmp = list[i];
	    list[i] = list[min];
	    list[min] = tmp;
	}	
        }
    }

}

void show_array(int list[], int len) {
     for(int i = 0; i < len; i++) {
        printf("%3d", list[i]);
     }
     printf("\n");
}

int main(int argc, char * argv[]) {
    int list[] = { 12, 13, 67, 61,63, 22, 21, 23, 56, 87, 19, 90, 20 };
    int len = (int)(sizeof(list) / sizeof(int));
    show_array(list, len);
    select_sort(list, len);
    show_array(list, len);
    return 0;
}
