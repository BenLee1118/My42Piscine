#include<unistd.h>

void putchar (char c);

void 	rush(int y, int x)
{
	int	row;
	int	col;

	row = 0;
	while (row < y) // row printing within range of y
	{
		col = 0;
		while (col < x)  // col printing within range of x
		{
			if (row == 0 && col == 0) //top left node
				putchar('/');
			else if ((row == 0 && col == x - 1) || (row == y - 1 && col == 0)) //top right node  OR  bottom left node 
				putchar('\\');
			else if (row == y - 1 && col == x - 1) // bottom right node
				putchar('/');
			else if (row == y - 1 || row == 0 || col == 0 || col == x - 1)  //edges
				putchar('*');
			else
				putchar(' '); // other spaces within nodes and edges
			col++;
		}
		write(1, "\n", 1); //print new line for every row's completion of column printing loop
		row++;  //go to next row
	}
}
