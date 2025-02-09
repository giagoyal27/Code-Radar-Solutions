#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    if (a<0){
        prinf("Positive");
    }
    else if (a>0){
        prinf("Negative");
    }
    else if (a==0){
        prinf("Zero");
    }
    return 0;
}