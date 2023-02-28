#include <stdio.h>
#include "grid_check.h"

/*
This function checks for duplicates in a sequence of 4  numbers excluding zeros.
The functions get a sequence of 6, where the first and die last number define the rules of that sequence, , e.g:  1  \4 3 2 1\  4
It returns 1 if no duplicate detected, otherwise it returns 0.
*/
int	ft_check_duplicates(int	*sequence)
{
	int	a;
	int	b;

	a = 1;
	b = 1;

    //starts at idx = 1 and ends at idx = 4 to exclude the "rule-numbers" of the check
	while (a < 5)
	{
        b = 1;
		while (b < 5)
		{
            //Don't compare to yourself :-)
			if (a == b)
			{
				b++;
				continue;
			}

            //Don't consider zeros for duplicate check, since they are placeholders
			if ((sequence[a] == sequence[b]) && (sequence[a] != 0))
            {
                printf("Duplicate.\n");
                return (0);
            }
			b++;
		}
		a++;
	}
	return (1);
}

/*
This function checks if a sequence of 6 numbers follow the rules of the puzzle.
The first an the last number define the rules, e.g:  1  \4 3 2 1\  4
It returns 1 if it is valid, otherwise it returns zero.
*/
int	ft_check_sequence(int *sequence)
{
	int	i;
	int	bigger;
	int	highest_nbr;
	int	zero_cnt;

	i = 1;
	zero_cnt = 0;
	bigger = 0;
	highest_nbr = 0;

    //check if there are duplicates in the considered sequence
    if (!ft_check_duplicates(sequence))
        return (0);

    //check how many increasing values are coming until the highest val is reached
    //if there are no placeholders in line, the value should be the same as sequence[0]
    //which is the rule when you read from the left side
    //we dont check from the reight side, because ft_check_col/row inverts the sequence and checks it again
	while (i < 5)
	{
		if (sequence[i] >= highest_nbr)
		{
			highest_nbr = sequence[i];
			bigger++;
		}
		i++;
	}

    //Check if there are placeholders in the sequence
	i = 1;
	while (i < 5)
	{
		if (sequence[i] == 0)
			zero_cnt++;
		i++;
	}

    //if there are no placeholders in the sequence and the amount of increasing heights (bigger)
    //equals the rule(sequence[0]) or if there are placeholders, this sequence is considered as valid
	if (bigger == sequence[0] || zero_cnt > 0)
        return (1);
	else
        return (0);
}

/*
This function gets the crrent grid and the number of the col.
It builds a sequence with the numbers in the col and checks, 
whether it's valid with ft_check_sequence, forewards and backwards
*/
int	ft_check_col(int *grid, int col)
{
	int	sequence[6];
	int	i;

	i = 0;
	while (i < 6)
	{
		sequence[5 - i] = grid[col + (6 * i)];
		i++;
	}
	if (ft_check_sequence(sequence) == 0)
		return (0);
	i = 0;
	while (i < 6)
	{
		sequence[i] = grid[col + (6 * i)];
		i++;
	}
	return (ft_check_sequence(sequence));
}

/*
This function gets the crrent grid and the number of the row.
It builds a sequence with the numbers in the row and checks, 
whether it's valid with ft_check_sequence, forewards and backwards
*/
int	ft_check_row(int *grid, int row)
{
	int	sequence[6];
	int	i;

	i = 0;

    //write backwards into the row temp array to check the firs tdirection
	while (i < 6)
	{
		sequence[5 - i] = grid[(row * 6) + i];
		i++;
	}

    //check the row with the backwards filled
	if (ft_check_sequence(sequence) == 0)
		return (0);
	i = 0;

    //refill the array with the row the other way arround
	while (i < 6)
	{
		sequence[i] = grid[(row * 6) + i];
		i++;
	}
	return (ft_check_sequence(sequence));
}
