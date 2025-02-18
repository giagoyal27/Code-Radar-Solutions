#include <stdio.h>

int main() {
    int month, year, days;
    scanf("%d", &month);
    if (month < 1 || month > 12) {
        printf("Invalid month");
        return 1;}
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            scanf("%d", &year);
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                days = 29;
            else
                days = 28;
            break;
    }
    printf("%d", days);
    return 0;
}