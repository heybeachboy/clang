#include <stdio.h>

void insert_sort(int list[], int len) {
     int i, j, tmp;	
     for(i = 1; i < len; i++) {
         
         for(j = i, tmp = list[i]; j > 0 && list[j-1] > tmp; j--) {
            list[j] = list[j-1];
	 }
	 list[j] = tmp;
     }

}

void show_list(int arr[], int len) {
    for(int i = 0; i < len; i++) {
        printf("%3d", arr[i]);
    }	    
    putchar('\n');
}

int main(void) {
    int list[] = { 77, 12, 32, 54, 23, 54, 23, 87, 82, 81, 98, 43, 33, 99, 66 };
    int len = (int)(sizeof(list) / sizeof(int));
    show_list(list, len);
    insert_sort(list, len);
    show_list(list, len);    
    return 0;
}
