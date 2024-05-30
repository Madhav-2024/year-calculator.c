#include <stdio.h>

int main() {
    int year, daysInMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
    printf("Enter the year: ");
    scanf("%d", &year);

    
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        daysInMonth[2] = 29; 
    }

    
    for (int month = 1; month <= 12; month++) {
        
        switch (month) {
            case 1: printf("\n\nJanuary\n"); break;
            case 2: printf("\n\nFebruary\n"); break;
            case 3: printf("\n\nMarch\n"); break;
            case 4: printf("\n\nApril\n"); break;
            case 5: printf("\n\nMay\n"); break;
            case 6: printf("\n\nJune\n"); break;
            case 7: printf("\n\nJuly\n"); break;
            case 8: printf("\n\nAugust\n"); break;
            case 9: printf("\n\nSeptember\n"); break;
            case 10: printf("\n\nOctober\n"); break;
            case 11: printf("\n\nNovember\n"); break;
            case 12: printf("\n\nDecember\n"); break;
        }

        
        printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

        
        int startDay = (year + year / 4 - year / 100 + year / 400) % 7; 

        
        for (int space = 0; space < startDay; space++) {
            printf("     ");
        }

        
        for (int day = 1; day <= daysInMonth[month]; day++) {
            printf("%4d ", day);

            
            if ((day + startDay) % 7 == 0) {
                printf("\n");
            }
        }
        printf("\n");
    }

    return 0;
}
