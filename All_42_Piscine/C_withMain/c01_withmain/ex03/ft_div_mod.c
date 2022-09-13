#include<stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
    printf("%d %d", *div , *mod);
}


int main()
{
    int a;
    int b;
    int c;
    int d;
    int *div;
    int *mod;

    a = 30;
    b = 5;
    div = &c;
    mod = &d;
    ft_div_mod(a, b, div, mod);
}
