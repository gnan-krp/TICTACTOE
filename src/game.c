#include <stdio.h>
#include "game.h"

int checkWinner(char a[3][3], char currentPlayer) {
    for(int i = 0; i < 3; i++)
        if(a[i][0] == currentPlayer && a[i][1] == currentPlayer && a[i][2] == currentPlayer)
            return 1;
    for(int i = 0; i < 3; i++)
        if(a[0][i] == currentPlayer && a[1][i] == currentPlayer && a[2][i] == currentPlayer)
            return 1;
    if(a[0][0] == currentPlayer && a[1][1] == currentPlayer && a[2][2] == currentPlayer)
        return 1;
    if(a[0][2] == currentPlayer && a[1][1] == currentPlayer && a[2][0] == currentPlayer)
        return 1;
    return 0;
}

void printBoard(char a[3][3]) {
    for(int i = 0; i < 3; i++) {
        printf(" %c | %c | %c\n", a[i][0], a[i][1], a[i][2]);
        printf(" ----------\n");
    }
}
