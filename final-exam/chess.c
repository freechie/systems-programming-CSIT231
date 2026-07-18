#include <stdio.h>

#define ROWS 8
#define COLS 8

char board[ROWS][COLS] = {
    {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
    {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
    {'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A'},
    {'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A'},
    {'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A'},
    {'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A'},
    {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
    {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
};

char white[ROWS][COLS] = {
    {'-', '-', '-', '-', '-', '-', '-', '-'},
    {'-', '-', '-', '-', '-', '-', '-', '-'},
    {'-', '-', '-', '-', '-', '-', '-', '-'},
    {'-', '-', '-', '-', '-', '-', '-', '-'},
    {'-', '-', '-', '-', '-', '-', '-', '-'},
    {'-', '-', '-', '-', '-', '-', '-', '-'},
    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
    {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
};

char black[ROWS][COLS] = {
    {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
    {'-', '-', '-', '-', '-', '-', '-', '-'},
    {'-', '-', '-', '-', '-', '-', '-', '-'},
    {'-', '-', '-', '-', '-', '-', '-', '-'},
    {'-', '-', '-', '-', '-', '-', '-', '-'},
    {'-', '-', '-', '-', '-', '-', '-', '-'},
};

int main(void)
{
    printf("Occupied and Available map\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("White chess pieces map\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%c ", white[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("black chess pieces map\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%c ", black[i][j]);
        }
        printf("\n");
    }
    return 0;
}