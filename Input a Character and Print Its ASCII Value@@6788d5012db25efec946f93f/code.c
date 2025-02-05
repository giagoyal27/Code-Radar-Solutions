#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch;
    scanf("%c", &ch); // Take a single character input

    printf("ASCII value of '%c' is: %d\n", ch, ch); // Print the ASCII value

    return 0;
}
