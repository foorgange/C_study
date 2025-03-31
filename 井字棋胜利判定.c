#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int main(void)
{
    const int size = 3;
    int board[size][size];
    int i,j;
    int numOfO;
    int numOfX;
    int result = -1; // -1:没有人赢; 0:圆棋赢; 1:叉棋赢
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            scanf("%d",&board[i][j]);
        }
    }
    for(i=0; i<size && result ==-1; i++){
        numOfO = numOfX = 0;
        for(j=0; j<size; j++){
            if(board[i][j] == 1){
                numOfO ++;
            }else{
                numOfX ++;
            }
        }
        if(numOfX == size){
            result = 0;
        }else if (numOfO == size){
            result = 1;
        }
    }
    if( result == -1){
        for(j=0; j<size && result ==-1; j++){
            numOfO = numOfX = 0;
            for(i=0; i<size; i++){
                if(board[i][j] == 1){
                    numOfO ++;
                }else{
                    numOfX ++;
                }
            }
            if(numOfX == size){
                result = 0;
            }else if (numOfO == size){
                result = 1;
            }
        }
    }
    if( result == -1){
        numOfO = numOfX = 0;
        for(i=0; i<size; i++){
            if(board[i][i] == 1){
                numOfO ++;
            }else{
                numOfX ++;
            }
        }
        if(numOfX == size){
            result = 0;
        }else if (numOfO == size){
            result = 1;
        }
    }
    if( result == -1){
        numOfO = numOfX = 0;
       for(i=0; i<size; i++){
        if(board[i][size-i-1] == 1){
            numOfO ++;
        }else{
            numOfX ++;
        }
        if(numOfX == size){
            result = 0;
        }else if (numOfO == size){
            result = 1;
        }

    }    
    }
    system("pause");
    return 0;
}
