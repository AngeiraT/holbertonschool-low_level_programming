#include "main.h"
#include <stdio.h>
/**
*print_chessboard - Entry
*@a: array
*Return: void
*/

void print_chessboard(char (*a)[8])
{
	int rows;
	int columns;

	for (rows = 0; rows < 8; rows++)
	{
		for (columns = 0; columns < 8; columns++)
		{
			putchar(a[rows][columns]);
		}
		putchar('\n');
	}

}
