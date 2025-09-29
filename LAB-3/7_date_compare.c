#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
void main()
{
    struct Date date1, date2;
    printf("Enter first date (DD MM YYYY): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    printf("Enter second date (DD MM YYYY): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    if(date1.year < date2.year){
        printf("First Date is Earlier"); }
    else if(date1.year < date2.year){
        printf("Second Date is Earlier"); }
    else{
        if(date1.month < date2.month){
            printf("First Date is Earlier"); }
        else if(date1.month > date2.month){
            printf("Second Date is Earlier"); }
        else{
            if(date1.day < date2.day){
                printf("First Date is Earlier"); }
            else if(date1.day > date2.day){
                printf("Second Date is Earlier"); }
            else{
                printf("Both Dates are Same"); }
        }
    }

    
}