#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b,result;
    scanf("%f", &a);
    scanf("%f", &b);
    result = a*b;
    printf("Product: %.2f\n", result)
    return 0;
}