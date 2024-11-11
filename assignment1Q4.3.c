#include <stdio.h>

int numswap(int* x, int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    

}

int main(){
    int x=30   ,y=50,z;
    z=numswap(&x,&y);
    printf("%d %d",x,y);

}
