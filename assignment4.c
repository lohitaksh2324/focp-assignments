#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
    srand(time(NULL));
    char choice[10];
    printf("Enter stone,paper or scissors: ");
    scanf("%s",choice);
    int a=rand()%101;
    
    if(strcmp(choice,"stone")==0){
        if(a>=0 && a<=33){
            printf("you chose %s and the computer chose stone,match tied",choice);
        }
        else if(a>33 && a<=66){
            printf("you chose %s and the computer chose paper,you lost the match",choice);
        }
        else if(a>66 && a<=100){
            printf("you chose %s and the computer chose scissors,you won the match",choice);
        }
        
    }
    else if(strcmp(choice,"paper")==0){
        if(a>=0 && a<=33){
            printf("you chose %s and the computer chose stone,you won the match",choice);
        }
        else if(a>33 && a<=66){
            printf("you chose %s and the computer chose paper,match tied",choice);
        }
        else if(a>66 && a<=100){
            printf("you chose %s and the computer chose scissors,you lost the match",choice);
        }
        
    }
    else if(strcmp(choice,"scissors")==0){
        if(a>=0 && a<=33){
            printf("you chose %s and the computer chose stone,you lost the match",choice);
        }
        else if(a>33 && a<=66){
            printf("you chose %s and the computer chose paper,you won the match",choice);
        }
        else if(a>66 && a<=100){
            printf("you chose %s and the computer chose scissors,match tied",choice);
        }
        
    }
    else{
        printf("Invalid choice");
    }



}
