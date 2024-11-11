#include <stdio.h>
int swap(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
   

}
int main(){
    printf("enter the two numbers: ");
    int x,y;
    scanf("%d %d",&x,&y);
    swap(x,y);
    printf("The value of a is %d\n and b is %d",x,y);

    return 0;
}
