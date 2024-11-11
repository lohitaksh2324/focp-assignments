#include <stdio.h>

int main(){
    int xcord,ycord;
    printf("enter x-coordinate: ");
    scanf("%d",&xcord);
    printf("enter y-coordinate: ");
    scanf("%d",&ycord);
    if(xcord>0 && ycord>0){
        printf("the point lies in first quadrant");
    }
    else if(xcord>0 && ycord<0){
        printf("the point lies in fourth quadrant");
    }
    else if(xcord<0 && ycord<0){
        printf("the point lies in third quadrant");
    }
    else if(xcord<0 && ycord>0){
        printf("the point lies in second quadrant");
    }
    else if(xcord==0 && ycord==0){
        printf("point is at origin");
    }
}
