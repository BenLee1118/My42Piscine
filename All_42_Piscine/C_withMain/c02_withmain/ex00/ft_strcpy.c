#include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
    int i; 
    
    i = 0;
    while (src[i] != '\0' || dest[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    //dest[i] = '\0';
    return (dest);
}
int main()
{
    char src[] = "eechernting";
    char dest[] = "aaaaaaaaajhbgjhb";
    char *pdest;
    
    //char    *dest_ptr = strcpy(dest, src);
    printf("      src: %s\n", src);
    printf("     dest: %s\n", dest);
    pdest = ft_strcpy(dest, src);
    printf("     dest: %s\n", dest);
    printf("     dest: %s\n", pdest);
    //printf("ft_strcpy: %s\n", dest_ptr);
    
    printf("    dest: %p\n", dest);
    //printf("dest_ptr: %p\n", ft_strcpy);

    return 0;
}
