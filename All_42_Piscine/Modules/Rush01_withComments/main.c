#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "grid.h"
#include "solve_grid.h"
#include "grid_check.h"


int	ft_check_input(int argc, char **argv, int **user_input)
{
	int	i;
	int	k;

	k = 0;
	i = 0;
	//argc: argument count. Must be two beacuse the first argument is always the programm name, the second is the user input
	//argv is an array of strings. In our case two strings. the first ist the programm name and
	//the second is the user input, e.g "3 2 1 2 2 1 3 3 3 3 1 2 2 1 2 3"
	//argv[1] is then the user input
	//argc and argv is passed when some run the prgramm in the terminal
	while (argc == 2 && argv[1][i] != '\0')
	{
		if (i % 2 == 0) //only even index is a number, every odd is a space
		{
			if (!(argv[1][i] >= '1' && argv[1][i] <= '4')) //Invalid user input
				return (0);
			else
			{
				//valid user input --> add to the passed user input array
				(*user_input)[k] = (int)(argv[1][i] - 48);
				k++;
			}
		}
		else
			if (argv[1][i] != ' ')//Numbers only are allowed to be sepreated by space
				return (0);
		i++;
	}
	if (i != 31 || argc != 2) //31 = 16 numbers + 15 spaces, more/less than two arguments are invalid
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	int	grid[36];	//1-Dimensional 6x6 grid
	int	user_input[16]; //converted unserinput (string) into this array of ints
	int	*p_grid;
	int	*p_user_input;

	p_user_input = (int *)user_input;
	p_grid = (int *) grid; //casten, beacuse the compiler complains otherwise int[]!=int *
	if (!ft_check_input(argc, argv, &p_user_input)) //Checks user input
	{
		write(1, "Error\n", 6);
		return (0);
	}
	ft_init_grid(&p_grid, &p_user_input);  //write views from user input to the 6x6 grid and fills up the rest with 0s
	printf("Empty grid: \n");
	ft_print_grid(&p_grid);	
	ft_prefill_save_values(&p_grid); //works without prefilling
	printf("Prefilled grid: \n");
	ft_print_grid(&p_grid);
	if (ft_solve_grid(1, 1, &p_grid) == 1) //solve grid and starts at (1, 1) (its within 4x4 grid)
    {
        printf("\n cucked \n");
		ft_print_grid(&p_grid);	//solve_grid return -1 if it didnt found a solution, 1 when success
    }
	else
		write(1, "Error\n", 6);
	return (0);
}
