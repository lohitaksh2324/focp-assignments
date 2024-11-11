#include <stdio.h>

int main(){
    int max;
    printf("enter the max length of the array: ");
    scanf("%d",&max);
    int marks[max];
    for(int i=0;i<max;i++){
        printf("enter the marks: ");
        scanf("%d",&marks[i]);
    }

    for(int i=0;i<max;i++){
        if(marks[i]>75 && marks[i]<100){
            printf("your marks is: %d\n and grade is A\n",marks[i]);
            continue;
        }
        else if(marks[i]>=60 && marks[i]<75){
            printf("your marks is: %d\n and grade is B\n",marks[i]);
            continue;
        }
        else if(marks[i]>=40 && marks[i]<60){
            printf("your marks is: %d\n and grade is C\n",marks[i]);
            continue;
        }
        else if(marks[i]<40 && marks[i]>0){
            printf("your marks is %d\nand grade is D\n",marks[i]);
            continue;
            
        }
        else {
            printf("invalid marks");
        }

        
    }
}
