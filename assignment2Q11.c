#include <stdio.h>

int main(){
    int max,pos,num;
    printf("enter the length of the array: ");
    scanf("%d",&max);
    int arr[max];
   
    for(int i=0;i<max;i++){
        printf("enter the numbers in array: ");
        scanf("%d",&arr[i]);

    }

    printf("enter the number u wanna add:");
    scanf("%d",&num);
    printf("enter the position of number: ");
    scanf("%d",&pos);

    for(int i=max;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=num;
    max++;

    for(int i=0;i<max;i++){
        printf("index= %d element=%d\n",i,arr[i]);
    }
    return 0;
}
