#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a;
    printf("Enter a number: ");
    scanf("%f", &a);
    printf("You entered: %d\n", a);
    return 0;
}
