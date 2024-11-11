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
    printf("Duplicate numbers in the array are: ");
    for(int i=0;i<max;i++){
        for(int j=i+1;j<max;j++){
            if(arr[i]==arr[j]){
                printf("%d ", arr[i]);
                break; 
            }
           
        }
    }
}
