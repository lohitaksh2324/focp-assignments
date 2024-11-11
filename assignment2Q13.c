#include <stdio.h>

int main(){
    int temp,max;
    printf("enter the length of array");
    scanf("%d",&max);
    int arr[max];
    for(int i=0;i<max;i++){
        printf("enter the elements of array");
        scanf("%d",&arr[i]);
        
    }
    for(int i=0;i<max-1;i++){
        for(int j=0;j<max-i-1;j++){
            if(arr[j]<arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<max;i++){
        printf("%d ",arr[i]);
    }

}
