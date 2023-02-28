#include <unistd.h>
void putchar(char c)
{
	write(1, &c, 1);
}

void row (int x, char star, char last)
{
	--x;
		while (x > 1)
		{
			putchar(star);
			--x;
		}

		if (x ==  1)
		{
			putchar(last);
		}
}
		
void wall(int x, int y, char sidestar)
{
	int i;
	int j;

	while (y > 1)
	{
		putchar(sidestar);
		i=1;
		while  (x >  i)
		{
			putchar(' ');
			i++;
		}
		putchar(sidestar);
		putchar('\n');
		y--;
	}

}
			
void rush(int x, int y)
{
	if (y >= 1 && x >= 1)
	{
		putchar('/');
		row(x, '*', '\\');
		putchar('\n');
	}

	if (y > 1 && x >= 1)
	{
		wall (x ,y, '*');
	}

	if (y >= 2 && x >= 1)
	{
		putchar('\\');
		row(x, '*', '/');
	}
}

int main(void)
	{
		rush(5,3);
		return (0);
	}

