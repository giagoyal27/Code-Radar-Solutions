#include <stdio.h>
int main(){
    int marks1;
    scanf("%d", &marks1);
    if (marks1>=90){
        printf("A");
    }
    else if (marks1>=80 && marks1=<90){
        printf("B");
    }
    else if (marks1>=70 && marks1=<80){
        printf("C");
    }
    else if (marks1>=60 && marks1=<70){
        printf("D");
    }
    else {
        printf("F");
    }
    return 0;
}
