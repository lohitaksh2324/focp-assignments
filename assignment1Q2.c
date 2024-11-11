#include <stdio.h>

int hcf(int x,int y){
    int i,hc,n;
    if(x>y){
        n=y;
    }
    else{
        n=x;
    }
    for(i=n;i>=1;i--){
        if(x%i==0 && y%i==0){
            hc=i;
            printf("The hcf is: %d",hc);
            break;

        }

    }
    
}
int main(){
    int x,y,z;
    printf("enter x and y");
    scanf("%d %d",&x,&y);
    z=hcf(x,y);
    return 0;
}
