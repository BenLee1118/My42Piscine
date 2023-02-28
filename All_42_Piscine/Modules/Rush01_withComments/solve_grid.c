#include "solve_grid.h"
#include "grid_check.h"
#include "grid.h"
#include <stdio.h>

int	ft_solve_grid(int row, int col, int **grid)
{
	//This is a preset value not at the last colum, we dont want to chang it,
	//we just call ft_solve at the next field on the right.
	if (col < 4 && (*grid)[row * 6 + col] > 0)
    {
        printf("Save value, skip this one.\n");
        return (ft_solve_grid(row, (col + 1), grid));
    }

	//This is a preset value at the last colum, we dont want to chang it,
	//we just call ft_solve at col 1 in the nex row. we jump to this field
	else if ((*grid)[row * 6 + col] > 0)
	{
        printf("Save value, skip this one.\n");
		if (row == 4 && col == 4)
			return (1);
		col = 1;
		return (ft_solve_grid((row + 1), col, grid));
	}
	//If it is 0, it is a value we want to change.
	else
	{
		//so we call this function (has to be in another beacuse of rom limit...)
		return (ft_change_value(row, col, grid));
	}
}

int	ft_change_value(int row, int col, int **grid)
{
	int	i;

	//We test every value from 1 to 4 for the given field
	i = 1;
	while (i < 5)
	{
		//We set i at the grid and pass row, col and the grid with the new value to the
		//ft_is_valid_cand.. function, which checks if the set value is valid
		(*grid)[row * 6 + col] = i;
		printf("Changed value in at row: %d, col: %d: \n", row, col);
		ft_print_grid(grid);
		if (ft_is_valid_candidate(row, col, grid))
		{
			//If it is valid and we are at the end we return one and start to
			//climb back from our recursion to the main fanction
			if (row == 4 && col == 4)
				return (1);
			//If it is not the last, we want to continue with the next field
			else if (col < 4)
			{
				if (ft_solve_grid(row, (col + 1), grid) == 1)
					return (1);
			}
			else
			{
				//If it was the last column we jump to the next row
				//pass col = 1;
				if (ft_solve_grid((row + 1), 1, grid) == 1)
                    return (1);
			}
			//If it wasnt a valid value we increment i and test that one, whether it is valid.
		}
        i++;
	}
	//If we testet from 1 to 4 and no value was valid we return -1 from this function call
	//to the previous function call (one recursion area above) then there the i is incremented
	//and it is tried again...
    printf("No solution found --> Jump back.\n");
	(*grid)[row * 6 + col] = 0;
	return (-1);
}

int	ft_is_valid_candidate(int row, int col, int **grid)
{
	if (ft_check_col(*grid, col) == 0)
    {
        printf("Inavlid Candidate in col\n");
        return (0);
    }

	if (ft_check_row(*grid, row) == 0)
    {
        printf("Invalid Candidate in row.\n");
        return (0);
    }
	printf("Valid Candidate.\n");
	return (1);
}
