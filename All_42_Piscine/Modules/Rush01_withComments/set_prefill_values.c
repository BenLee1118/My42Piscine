#include "set_prefill_values.h"

void	ft_set_colum(int row, int col, int **grid)
{
	//Checks if the left col (views) contains a 4
	//writes 1 2 3 4 in the row rightwards
	if ((*grid)[row * 6 + col] == 4 && col == 0)
	{
		(*grid)[row * 6 + col + 1] = 1;
		(*grid)[row * 6 + col + 2] = 2;
		(*grid)[row * 6 + col + 3] = 3;
		(*grid)[row * 6 + col + 4] = 4;
	}
	//Checks if the right row (views) contains a 4
	//writes 4 3 2 1 in the row leftwards
	else if ((*grid)[row * 6 + col] == 4 && col == 5)
	{
		(*grid)[row * 6 + col - 1] = 1;
		(*grid)[row * 6 + col - 2] = 2;
		(*grid)[row * 6 + col - 3] = 3;
		(*grid)[row * 6 + col - 4] = 4;
	}
}

void	ft_set_row(int row, int col, int **grid)
{
	//Checks if the top row(views) contains a 4
	//writes 1 2 3 4 in this e col downwards
	if (row == 0 && (*grid)[row * 6 + col] == 4)
	{
		(*grid)[(row + 1) * 6 + col] = 1;
		(*grid)[(row + 2) * 6 + col] = 2;
		(*grid)[(row + 3) * 6 + col] = 3;
		(*grid)[(row + 4) * 6 + col] = 4;
	}
	//Checks if the bottom row(views) contains a 4
	//writes 4 3 2 1 in this e col upwards
	else if (row == 5 && (*grid)[row * 6 + col] == 4)
	{
		(*grid)[(row - 1) * 6 + col] = 1;
		(*grid)[(row - 2) * 6 + col] = 2;
		(*grid)[(row - 3) * 6 + col] = 3;
		(*grid)[(row - 4) * 6 + col] = 4;
	}
}

//4s are setted when the view is 1.
void	ft_set_fours(int row, int col, int **grid)
{
	if ((*grid)[row * 6 + col] == 1 && col == 0)
		(*grid)[row * 6 + col + 1] = 4; //checks if a 1 is in the left col (view), sets a 1 one field to the right (col + 1)
	else if ((*grid)[row * 6 + col] == 1 && col == 5)
		(*grid)[row * 6 + col - 1] = 4;//checks if a 1 is in the right col (view), sets a 1 one field to the left (col - 1)
	else if (row == 0 && (*grid)[row * 6 + col] == 1)
		(*grid)[(row + 1) * 6 + col] = 4;//checks if a 1 is in the top row (view), sets a 1 one field to the under (row + 1)
	else if (row == 5 && (*grid)[row * 6 + col] == 1)
		(*grid)[(row - 1) * 6 + col] = 4; //checks if a 1 is in the top row (view), sets a 1 one field to the under (row + 1)
	else if ((*grid)[5 * 6 + col] == 3 && (*grid)[0 * 6 + col] == 2)
		(*grid)[2 * 6 + col] = 4;// checks if 2 and 3 across each other
	else if ((*grid)[5 * 6 + col] == 2 && (*grid)[0 * 6 + col] == 3)
		(*grid)[3 * 6 + col] = 4;
	else if ((*grid)[row * 6 + 0] == 3 && (*grid)[row * 6 + 5] == 2)
		(*grid)[row * 6 + 3] = 4;
	else if ((*grid)[row * 6 + 0] == 2 && (*grid)[row * 6 + 5] == 3)
		(*grid)[row * 6 + 2] = 4;
}

void	ft_set_threes(int row, int col, int **grid)
{
	if ((*grid)[5 * 6 + col] == 1 && (*grid)[0 * 6 + col] == 2)
		(*grid)[1 * 6 + col] = 3;
	else if ((*grid)[5 * 6 + col] == 2 && (*grid)[0 * 6 + col] == 1)
		(*grid)[4 * 6 + col] = 3;
	else if ((*grid)[row * 6 + 0] == 1 && (*grid)[row * 6 + 5] == 2)
		(*grid)[row * 6 + 4] = 3;
	else if ((*grid)[row * 6 + 0] == 2 && (*grid)[row * 6 + 5] == 1)
		(*grid)[row * 6 + 1] = 3;
}
