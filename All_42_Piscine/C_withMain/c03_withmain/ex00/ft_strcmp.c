#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

	i = 0;
	while(s1[i] != '\0' || s2[i] != '\0')
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
    char str1[] = "abcdD";
    char str2[] = "abcddd";
    

    printf("      src: %s\n", str1);
    printf("     dest: %s\n", str2);
    a = ft_strcmp(str1, str2);
    printf("   length: %d\n", a);
    return 0;
}
