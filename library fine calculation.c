#include <stdio.h>
int main() {
int book ID, due date, return date, days overdue;
float fine rate;
//input: book ID, due date and return date from the user
printf("enter book ID:");
scanf("%d",&book ID);
printf("enter return date :");
scanf("%d",&return date);
printf("enter due date:");
scanf("%d" &due date);
//calculate the number of days overdue
days overdue=return date-due date;
//determine fine rate based on days overdue
if(days overdue<=7) {
fine rate=20;//ksh 20 per day for up to 7days
}else if(daysoverdue <=14) {
fine rate=50;//ksh 50 per day for 8-14 days
}else if(days overdue 15>=) {
fine rate=100;//ksh 100 per day for 15 or more days
printf("unfortunately we are unable to offer you a loan at this time. \n");
}
// If days overdue is negative or zero, no fine is charged
if (days overdue<=0) {
    fine rate=0;
    days overdue=0;
    // reset overdue days to 0 if returned on time
    }
    // display the results 
    printf("\nbook ID:%d\n" ,book ID);
    printf("return date:%d\n",return date);
    printf("due date:%d\n",due date);
    printf("days overdue:%d\n",days overdue);
    printf("fine rate per day:ksh%lf\n",fine rate);
    printf("total fine:ksh%lf\n",fine rate*days overdue);
return 0;
}