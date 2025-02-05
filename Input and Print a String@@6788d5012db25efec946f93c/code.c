#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char word[100]; 
    scanf("%c", word); 
    printf("You entered: %c\n", word); 
    return 0;
}