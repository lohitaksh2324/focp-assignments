#include <stdio.h>

int main(){
    int max;
   

    printf("Enter the max length of array: ");
    scanf("%d",&max);
    int arr[max];

    for(int i=0;i<max;i++){
        printf("enter the element of matrix: ");
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<max;i++){
        
            if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
               
                    printf("index: %d peak element is %d",i,arr[i]);
                    
                
            
            
        }

    }
    return 0;
}
