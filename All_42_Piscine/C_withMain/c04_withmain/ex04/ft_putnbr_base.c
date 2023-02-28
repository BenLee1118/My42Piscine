#include<unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strl(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int ft_check(char *str)
{
    int i;
    int j;
    int a;

    a = ft_strl(str);
    i = 0;
    if (str[i] == '\0' || a == 1)
    return (0);
    while (str[i] != '\0')
    {
        if (str[i] == '+' || str[i] == '-'  || str[i] <= 32 || str[i] == 127)
        return (0);
        j = i + 1;
        while (j < ft_strl(str))
        {
            if (str[i] == str[j])
            return (0);
            j++;
        }
        i++;
    }
    return (1);
}
void    ft_putnbr_base(int nbr, char *base)
{
    int size;
    int checking;
    long    num;

    num = nbr;
    checking = ft_check(base);
    size = ft_strl(base);
    if (checking == 1)
    {
        if (num < 0)
        {
            ft_putchar('-');
            num *= -1;
        }
        if (num < size)
        {
            ft_putchar(base[num]);
        }
        if (num >= size)
        {
            ft_putnbr_base(num / size, base);
            ft_putnbr_base(num % size, base);
        }
    }
}

int main (void)
{
    ft_putnbr_base(-12, "01");
    write(1, "\n", 1);
    ft_putnbr_base(-40, "poneyvif");
    write(1, "\n", 1);
    ft_putnbr_base(894867, "0123456789");
    write(1, "\n", 1);
    ft_putnbr_base(53, "0123456789abcdef");
}
