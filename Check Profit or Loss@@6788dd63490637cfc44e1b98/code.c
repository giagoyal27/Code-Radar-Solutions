#include <stdio.h>
int main() {
    int a,b;
    scanf("%a %b", &a, &b);
    if (a<b){
        printf("Profit");
    }
    else {
        printf("Loss");
    }
    return 0;
}