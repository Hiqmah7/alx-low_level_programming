#include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
int row, column;

row = 0;
while (row < 8)
{
column = 0;
while (column < 8)
{
_putchar (a[row][column]);
column++;
}
_putchar ('\n');
row++;
}
}
