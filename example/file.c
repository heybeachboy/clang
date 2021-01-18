#include <stdio.h>

int main(int argc, char * argv[]) {
    FILE *fp = NULL;
    fp = fopen("./example.txt", "w+");
    fprintf(fp, "This is my test file, write misinformation\n");
    fputs("gogogogogogogogogogogogogogogogog\n", fp);
    fclose(fp);
return 0;
}
