#include <stdio.h>

int main(int argc, char *argv[]) {

    double first, second, price;
    
    printf("Please input 2 double:\n");

    scanf("%lf %lf", &first, &second);

    printf("Result = %.2lf\n", first * second);
}
