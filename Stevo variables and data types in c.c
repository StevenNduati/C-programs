# include<stdio.h>
int main() {
float principle, rate, time, simple_interest;
printf("enter principle amount:") ;
scanf("%f", & principle) ;
printf("enter rate:") ;
scanf("%f", &rate) ;
printf ("enter time:") ;
scanf("%f", &time) ;
/*calculate simple interest*/
simple_interest= (principle*rate*time) /100;
/* Display the result */
printf ("simple_interest: %f\n", simple_interest) ;
return 0;
}
