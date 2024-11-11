#include <stdio.h>

int main(){
    int max;
    printf("enter the length of the array: ");
    scanf("%d",&max);
    int marks[max];
    for(int i=0;i<max;i++){
        printf("enter the marks: ");
        scanf("%d",&marks[i]);
    }

  
    int count=0;
    for(int i=0;i<max;i++){
        if(marks[i]==99){
            printf("student %d has scored 99 marks \n ",i+1);
            break;
            count+=1;
            

        }
    }
    if(count==0){
        printf("no student has scored 99 marks");
    }
}
