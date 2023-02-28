#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
   
    i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
int main()
{
    char src[] = "eechernting";
    char dest[10] ;
    unsigned int n = 7;
    
    //char    *dest_ptr = strcpy(dest, src);
    printf("      src: %s\n", src);
    printf("     dest: %s\n", dest);
    ft_strncpy(dest, src, n);
    printf("     dest: %s\n", dest);
    return 0;
}
