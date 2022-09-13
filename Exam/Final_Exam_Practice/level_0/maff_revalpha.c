#include<unistd.h>

int main(void)
{
    char    even;
    char    odd;

    odd = 'z';
    even = 'Y';
    while (even >= 'A')
    {
        write(1, &odd, 1);
        write(1, &even, 1);

        even -= 2;
        odd -= 2;
    }
    return (0);
}