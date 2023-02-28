#include<stdlib.h>
#include<stdio.h>

int *ft_range(int min, int max)
{
    int range;
    int index;
    int *tab;

    if (min >= max)
    return (0);
    range = max - min - 1;
    if ((tab = malloc(sizeof(int) * range)) == NULL)
    return (0);
    index = 0;
    while (index <= range)
    {
        tab[index] = min + index;
        index++;
    }
    return (tab);
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

	min = 5;
	max = 10;
	printf("min = %d, max = %d -> ", min, max);
	debug_dump_array(ft_range(min, max), max - min);
}
