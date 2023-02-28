#include<stdio.h>
void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int j;
    i = 0;
    j = size -1;
    while (i < j)
    {
        int temp;
        temp = tab[i];
        tab[i] = tab[j];
        tab[j] = temp;
        j--;
        i++;
    }
}


int main()
{
    int size;
    int tab[] = {1,2,3,4,5,6};
    size = 6;
    ft_rev_int_tab(tab, size);
    printf("%d, %d %d %d %d %d", tab [0], tab[1],tab[2],tab[3],tab[4],tab[5]);

    return 0;
}
