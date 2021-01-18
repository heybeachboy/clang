#include <stdio.h>
#include <stdlib.h>

int getNextRandomValue(void) {
    return rand();
}	

void fill_array(int *array, size_t len, int (*getNextValue)(void)) {
    for(int i = 0; i < len; i++) {
        array[i] = getNextValue();    
    }	    

}

int main(int agrc, char * argv[]) {
     
    int list[20];
    fill_array(list, 20, getNextRandomValue);
    
    for(int j = 0; j < 20; j++) {
        printf("list[%d] = %d\n", j, list[j]);
    }
return 0;
}
