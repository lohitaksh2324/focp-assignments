#include <stdio.h>
#include <math.h>
 
 float addition(float x,float y){
    return x+y;
 }
 float subtraction(float x,float y){
    return x-y;
 }
 float multiplication(float x,float y){
    return x*y;
 }
 float division(float x,float y){
    return x/y;
 }
 float logcalc(float x){
    return log(x);
 }
 float squareroot(float x){
    return sqrt(x);
 }

int main(){
    printf("Operations:\n Enter 1 for addition \n Enter 2 for subtraction \n Enter 3 for multiplication \n Enter 4 for division \n Enter 5 for logarithmic calculation \n Enter 6 for square root \n");
    int choice;
    float x,y;
    printf("enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("enter the value of first num: ");
        scanf("%f",&x);
        printf("enter the value of second num: ");
        scanf("%f",&y);
        printf("The sum of the number %f and %f is %f",x,y,addition(x,y));
        break;
        case 2:
        printf("enter the value of first num: ");
        scanf("%f",&x);
        printf("enter the value of second num: ");
        scanf("%f",&y);
        printf("The difference of the number %f and %f is %f",x,y,subtraction(x,y));
        break;
        case 3:
        printf("enter the value of first num: ");
        scanf("%f",&x);
        printf("enter the value of second num: ");
        scanf("%f",&y);
        printf("The product of the number %f and %f is %f",x,y,multiplication(x,y));
        break;
        case 4:
        printf("enter the value of first num: ");
        scanf("%f",&x);
        printf("enter the value of second num: ");
        scanf("%f",&y);
        printf("The quotient of the number %f and %f is %f",x,y,division(x,y));
        break;
        case 5:
        printf("enter the value of first num: ");
        scanf("%f",&x);
        printf("The log of %f is %f",x,logcalc(x));
        break;
        case 6:
        printf("enter the value of first num: ");
        scanf("%f",&x);
        printf("The square root fo the num %f is %f",x,squareroot(x));
        break;
        default:
        printf("invalid choice");
    }
}
