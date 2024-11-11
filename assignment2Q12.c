#include <stdio.h>

int main(){
    int max,pos;
    printf("enter the size of array: ");
    scanf("%d",&max);

    int arr[max];
    for(int i=0;i<max;i++){
        printf("enter the element of array: ");
        scanf("%d",&arr[i]);
    }

    printf("enter the position of number you want to delete: ");
    scanf("%d",&pos);

    for (int i=pos-1;i<max; i++) {
        arr[i] = arr[i + 1];
    }
        
        
    
    max--;
    for(int i=0;i<max;i++){
        printf("index: %d element: %d\n",i,arr[i]);
    }


}
