#include <stdio.h>

int main(){
    int max;
    printf("enter the length of array: ");
    scanf("%d",&max);
    int marks[max];
    for(int i=0;i<max;i++){
        printf("enter the marks: ");
        scanf("%d",&marks[i]);
    }

    
    for(int i=0;i<max;i++){
        marks[i]+=5;
        printf("marks of student %d is %d\n",i+1,marks[i]);
    }
    

    return 0;
}
