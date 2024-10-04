#include <stdio.h>
int main() {
int age;
double income;
//input: age and income from the user
printf("enter age:");
scanf("%d",&age);
printf("enter annual income (in ksh) :");
scanf("%lf",&income);
//check if age is 21 or older and income is at least ksh21, 000
if(age>=21 & income>=21000) {
printf("congratulations you qualify for a loan.\n");
}else{
printf("unfortunately we are unable to offer you a loan at this time. \n");
}
return 0;
}