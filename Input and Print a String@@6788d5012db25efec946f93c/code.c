#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char word[100]; 

    printf("Enter a word: ");
    scanf("%s", word); // Taking input (a single word)

    printf("You entered: %s\n", word); // Printing the entered word

    return 0;
}