#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c", &a); 
    printf("ASCII value of '%c' is: %d\n", a, a); 
    return 0;
}