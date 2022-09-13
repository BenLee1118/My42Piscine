#include <stdio.h>
    int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    while(s1[i] != '\0' && s2[i] != '\0' && i < n)
    {
        if (s1[i] > s2[i])
        {
            return (s1[i] - s2[i]);
            break ;
        }
        else if (s1[i] < s2[i])
        {
            return (s1[i] - s2[i]);
            break ;
        }
        i++;
    }
    return (s1[i] - s2[i]);
}
int main()
{
    int a;
    char s1[] = "abcddd";
    char s2[] = "abcddD";
    unsigned int n = 6;


    printf("      src: %s\n", s1);
    printf("     dest: %s\n", s2);
    a = ft_strncmp(s1, s2, n);
    printf("   length: %d\n", a);
    return 0;
}
