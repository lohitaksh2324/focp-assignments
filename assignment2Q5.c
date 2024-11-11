#include <stdio.h>

int main(){
    int max,total=0;
    printf("enter how many entries do u want to add in the array: ");
    scanf("%d",&max);
    int marks[max];
    for(int i=0;i<max;i++){
        printf("enter marks: ");
        scanf("%d",&marks[i]);
       

    }
    for(int i=0;i<max;i++){
        total+=marks[i];
    }
    printf("The total of all scores in marks array is: %d",total);
}
