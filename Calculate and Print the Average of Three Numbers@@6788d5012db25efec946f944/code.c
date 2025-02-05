#include <stdio.h>
int main() {
    int a,b,c;
    float result;
    scanf("%d %d %d", &a, &b, &c);
    result = ((a+b+c)/3.0);
    printf("Average: %.2f\n", result);
    return 0;
}