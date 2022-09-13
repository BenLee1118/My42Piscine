#include<stdio.h>
void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int temp;

    temp = 0;
    i = 0;
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (tab[i] > tab[j])
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
            j++;
        }
        i++;
    }
}


int main()
{
    int size;
    int tab[] = {6,3,4,1,2,5};
    size = sizeof(tab) / sizeof(tab[0]);
    ft_sort_int_tab(tab, size);
    printf("%d %d %d %d %d %d", tab [0], tab[1],tab[2],tab[3],tab[4],tab[5]);

    return 0;
}
