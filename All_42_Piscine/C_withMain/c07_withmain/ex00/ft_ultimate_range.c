#include<stdlib.h>
#include<stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int size;
    int index;
    int *tab;

    if (min >= max)
    {
        *range = 0;
        return (0);
    }
    size = max - min - 1;
    if ((tab = malloc(sizeof(int) * size)) == NULL)
    {
        *range = 0;
        return (-1);
    }
    *range = tab;
    index = 0;
    while (index <= size)
    {
        tab[index] = min + index;
        index++;
    }
    return (size + 1);
}

void	debug_dump_array(int numbers[], int size)
{
	int index;

	printf("[ ");
	index = 0;
	while (index < size)
	{
		printf("%d", numbers[index]);
		if (index != size - 1)
		{
			printf(", ");
		}
		index++;
	}
	printf(" ]");
}

int		main(void)
{
	int	min;
	int	max;
	int	*range;
	int	bound;

	min = 5;
	max = 10;
	bound = ft_ultimate_range(&range, min, max);
	printf("min = %d, max = %d -> (bound = %d) ", min, max, bound);
	fflush(stdout);
	debug_dump_array(range, bound + 2);
}
