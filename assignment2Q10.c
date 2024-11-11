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
    int count=0;
    for(int i=0;i<max;i++){
        count=0;
        for(int j=2;j<arr[i]/2;j++){
            if(arr[i]%j==0){
                count+=1;
            }
        }
        if(count>=1){
            printf("number %d is not prime\n",arr[i]);

        }
        else{
            printf("number %d is prime\n",arr[i]);
        }
    }
}
