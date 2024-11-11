#include <stdio.h>

int main(){
    char board[3][3]={{'1','2','3'},
                      {'4','5','6'},
                      {'7','8','9'}};
    char firstmove='X';
    int position;
    
    while(1){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                printf(" %c ",board[i][j]);
                if(j<2) printf("|");
            }
            printf("\n");
            if(i<2) printf("---|---|--- \n");
        }
        printf("enter in which position do you want to put ");
        scanf("%d", &position);
        int row=(position-1)/3;
        int col=(position-1)%3;
        if(board[row][col]=='X'||board[row][col]=='O'){
            printf("this position is already taken,enter a position again \n");
            continue;
        }
        board[row][col]=firstmove;
        if((board[0][0]==board[0][1]&&board[0][1]==board[0][2])||(board[1][0]==board[1][1]&&board[1][1]==board[1][2])||(board[2][0]==board[2][1]&&board[2][1]==board[2][2])||(board[0][0]==board[1][0]&&board[1][0]==board[2][0])||(board[0][1]==board[1][1]&&board[1][1]==board[2][1])||
           (board[0][2]==board[1][2]&&board[1][2]==board[2][2])||(board[0][0]==board[1][1]&&board[1][1]==board[2][2])||(board[0][2]==board[1][1]&&board[1][1]==board[2][0])) {
            
            
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    printf(" %c ",board[i][j]);
                    if(j<2) printf("|");
                }
                printf("\n");
                if(i<2) printf("---|---|--- \n");
            }
            printf("player with %c won \n", firstmove);
            break;  
        }
        if(firstmove=='X'){
            firstmove='O';
        }
        else{
            firstmove='X';
        }
    
    
}
}
