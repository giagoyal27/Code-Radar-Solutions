// #include <stdio.h>
// int main() {
//     int a;
//     scanf("%d", &a);
//     if (a<0){
//         printf("Positive");
//     }
//     else if (a>0){
//         printf("Negative");
//     }
//     else {
//         printf("Zero");
//     }
//     return 0;
// }


#include <stdio.h>

int main() {
    int a;
    
    // Taking input from the user
    scanf("%d", &a);
    
    // Corrected conditions for positive, negative, and zero
    if (a < 0) {
        printf("Negative");  // Fixed the incorrect message
    }
    else if (a > 0) {
        printf("Positive");  // Fixed the incorrect message
    }
    else {
        printf("Zero");
    }
    
    return 0;
}
