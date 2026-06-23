#include <stdio.h>
#include <stdbool.h>
#define gridsize 3
#define player_X 'X'
#define player_O 'O'

char board[gridsize][gridsize];
bool checkrows(char symbol)
{
    int count = 0;
    for (int rows = 0; rows < gridsize; rows++)
    {
        count = 0;
        for (int col = 0; col < gridsize; col++)
        {
            if (board[rows][col] == symbol)
            {
                count++;
            }
        }
        if (count == gridsize)
        {
            return 1;
        }
    }
    return 0;
}
bool checkcols(char symbol)
{
    int count = 0;
    for (int col = 0; col < gridsize; col++)
    {
        count = 0;
        for (int rows = 0; rows < gridsize; rows++)
        {
            if (board[rows][col] == symbol)
            {
                count++;
            }
        }
        if (count == gridsize)
        {
            return 1;
        }
    }
    return 0;
}
bool checkdiagonals(char symbol)
{
    int count = 0;
    for (int idx = 0; idx < gridsize; idx++)
    {
        if (board[idx][idx] == symbol)
        {
            count++;
        }
    }
    if (count == gridsize)
    {
        return 1;
    }
    count = 0;
    for (int rows = 0, col = 2; rows < gridsize; rows++, col--)
    {
        if (board[rows][col] == symbol)
        {
            count++;
        }
    }
    if (count == gridsize)
    {
        return 1;
    }
    return 0;
}
bool iswinner(char symbol)
{
    return (checkrows(symbol) || checkcols(symbol) || checkdiagonals(symbol));
}
void printBoard()
{
    for (int i = 0; i < gridsize; i++)
    {
        for (int j = 0; j < gridsize; j++)
        {
            printf("%c ", board[i][j]);
            if (j < gridsize - 1)
                printf("|");
        }
        printf("\n");

        if (i < gridsize - 1)
            printf("---+---+---\n");
    }
    printf("\n");
}

int main()
{
    for (int i = 0; i < gridsize; i++)
    {
        for (int j = 0; j < gridsize; j++)
        {
            board[i][j] = ' ';
        }
    }
    char currentplayer = player_X;
    int moves = 0;
    int rows, col;
    while (moves < gridsize * gridsize)
    {
        printBoard(); // Print the current state of the board
        printf("Player %c, enter your move (row and column): ", currentplayer);
        // check for valid input
        scanf("%d %d",&rows,&col);
        int x = rows; int y=col;
        if (x!=0 || x != 1 || x !=2 || y !=0 || y!=1 || y !=2 )
        {
            printf("Invalid input! Please enter valid data.\n");
            while (getchar() != '\n')
                ; // clear buffer
            continue;
        }
        // this way we if the move is valid
        
        if (rows >= 0 && rows < gridsize && col >= 0 && col < gridsize && board[rows][col] == ' ')
        {
            board[rows][col] = currentplayer;
            moves++;
        }
        // Check for a winner
        if (iswinner(currentplayer))
        {
            printBoard(); // Print the final board
            printf("Player %c wins!\n", currentplayer);
            return 0; // Exit the program
        }

        // Switch player
        if (currentplayer == player_X)
            currentplayer = player_O;
        else
            currentplayer = player_X;
    }
    printBoard();             // Print the final board
    printf("It's a draw!\n"); // If no winner
    return 0;
}
