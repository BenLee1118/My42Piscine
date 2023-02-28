#include <unistd.h>

void	ft_putchar(char c);
void    rush(int x, int y);
void    printrectangleR1(int i, int j, int x, int y);
void    printlineR1(int i, int j, int x, int y);

int    main(void)
{
    rush(5, 3);
    ft_putchar(10);
    rush(5, 1);
    ft_putchar(10);
    rush(1, 1);
    ft_putchar(10);
    rush(1, 5);
    ft_putchar(10);
    rush(4, 4);
    ft_putchar(10);
    return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    rush(int y, int x)
{
    int i;
    int j;
    int newline;

    i = 0;
    j = 0;
    newline = 10;
    while (i < x)
    {   
        j = 0;
        while (j < y)
        {
            if (((x == 1) && (y != 1)) || ((x != 1) && (y == 1)))
            {
                printlineR1(i,j,x,y);
            }
            else
            {
                printrectangleR1(i,j,x,y);
            }
            j++;
        }
        ft_putchar(newline);
        i++;
    }
}

void printlineR1(int i, int j, int x, int y)
{
    //top left                  
    if((i == 0) && (j == 0))
    {
        ft_putchar('/');
    }
    //bottom left                       //top right 
    else if (((i == x-1) && (j == 0)) || ((i == 0) && (j == y-1)))
    {
        ft_putchar('\\');
    }        
    //other part of line
    else
    {
        ft_putchar('*');
    }
}

void printrectangleR1(int i, int j, int x, int y)
{
    //top left                  //bottom right
    if(((i == 0) && (j == 0)) || ((i == x-1) && (j == y-1)))
    {
        ft_putchar('/');
    }
    //bottom left                      //top right
    else if (((i == x-1) && (j == 0)) || ((i == 0) && (j == y-1)))
    {
        ft_putchar('\\');
    }        
    //edge of rectangle
    else if (((i == 0) || (i == x-1)) || ((j == 0) || (j == y-1)))
    {
        ft_putchar('*');
    }
    else
    {
        ft_putchar(' ');
    }
}
