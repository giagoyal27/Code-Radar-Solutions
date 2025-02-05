#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d" &a, &b);
    if (a>b){
        printf("True %d\n", a , b);
    }
    else {
        printf("False %d\n", a,b);
    }
    return 0;
}