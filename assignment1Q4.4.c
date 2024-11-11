#include <stdio.h>

int numswap(int* x,int* y){
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
    

}
int main(){
    int x,y;
    printf("enter the value of x and y: ");
    scanf("%d %d",&x,&y);
    int z;
    z=numswap(&x,&y);
    printf("%d %d",x,y);
}
