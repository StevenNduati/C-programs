#include<stdio.h>
int main () {
//declaration and initialization
    char a= 'B';
    char name []={"Steve"} ;
    int age=18;
    float salary=2000; //%f
    double area=20; //%lf
    
    printf ("B:") ;
    scanf("%c", &a) ;
    printf ("The character is%c \n", a) ;
    
    printf ("Steve:") ;
    scanf("%s", &name) ;
    printf ("The name(string) is %s \n", name) ;
    
    printf("The character is  %c \n", a) ;
    printf("The name(Nduati) is %s \n", name); 
    printf("The age(int) is %d \n", age) ;
    printf ("The salary (float) is %.2f \n", salary) ;
    printf ("The area(double) is %.4lf \n", area) ;
    return 0;
    }