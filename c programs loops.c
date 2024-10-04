//do...while loop for promoting user to enter when yo start
#include<stdio.h>
int main (){
     int start, stop;
    int sum=0; // start
    printf("Choose when to start and stop:");
    scanf("%d%d",&start, &stop);
    
    
    do{
    
    
    
     printf("%d \n", start) ;
     start++; //step
     sum +=start;
     }
     while (start<=stop) ;//stop
    printf ("The sum is %d", sum) ;
     return 0;
}
   