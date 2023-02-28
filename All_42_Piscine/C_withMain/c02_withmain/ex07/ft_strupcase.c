#include <stdio.h>

char    *ft_strupcase(char *str)
{
    int i;
    //char temp;
    
    i = 0;
    while (str[i] != '\0')
    {
        //emp = str[i];
        str[i] = str[i] - 32;
        i++;
    }
    //dest[i] = '\0';
    return (str);
}
int main()
{
    char str[] = "eechernting";

    printf("      src: %s\n", str);
    ft_strupcase(str);
    printf("     dest: %s\n", str);
    return 0;
}

