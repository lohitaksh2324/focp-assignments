#include <stdio.h>

int main(){
    int max;
    printf("enter how many entries do u want to add in the array: ");
    scanf("%d",&max);
    int arr[max];
    for(int i=0;i<max;i++){
        printf("enter entries: ");
        scanf("%d",&arr[i]);
    }
    int check;
    printf("enter the number u want to check: ");
    scanf("%d",&check);
    check-=1;
    if(arr[check]%2==0){
        printf("number is even");
        
    }
    else{
        printf("number is odd");
    }
}
