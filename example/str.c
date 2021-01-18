#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[]) {
    char str1[50]; 
    char str2[50];
    printf("Please inut two string:\n");
    scanf("%s;%s\n", str1, str2);
    if (!strcmp(str1, str2)) {

        printf("well %s and %s is equal \n", str1, str2);
    }else {

        printf("sorry %s and %s is not equal \n", str1, str2);
    }    
    char str[10] = {'Q', 'E', 'F', 'P', 'O', 'P', 'H', 'L', 'C', '\0'};
    printf("My String : %s \n", str);

    char name[] = {'Z', 'H', 'O', 'U', 'L', 'E', 'E', '\0'};
    char job[] = {'D', 'E', 'V', '\0'};
    char info[14];
    int len;
    strcpy(info,name);
    strcat(info,job);
    printf("Print Info : %s ,length: %d\n", info, (int)strlen(info)); 
    return 0;
}
